#include <stdio.h>

typedef struct{
    int m,c,boat,cost;
}State;

State queue[100];
int front=0,rear=0;

int visited[4][4][2];

int isValid(int m,int c){

    int mr=3-m;
    int cr=3-c;

    if(m<0||c<0||m>3||c>3) return 0;

    if(m>0 && m<c) return 0;
    if(mr>0 && mr<cr) return 0;

    return 1;
}

void UCS(){

    State start={3,3,1,0};

    queue[rear++]=start;

    int moves[5][2]={{1,0},{2,0},{0,1},{0,2},{1,1}};

    while(front<rear){

        State s=queue[front++];

        if(s.m==0 && s.c==0 && s.boat==0){

            printf("Goal Found with cost %d\n",s.cost);
            return;
        }

        for(int i=0;i<5;i++){

            State next=s;

            if(s.boat==1){
                next.m-=moves[i][0];
                next.c-=moves[i][1];
            }
            else{
                next.m+=moves[i][0];
                next.c+=moves[i][1];
            }

            next.boat=!s.boat;
            next.cost=s.cost+1;

            if(isValid(next.m,next.c))
                queue[rear++]=next;
        }
    }
}

int main(){

    UCS();

}
