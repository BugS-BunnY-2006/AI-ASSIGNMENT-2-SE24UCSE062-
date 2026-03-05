#include <stdio.h>

int isValid(int m,int c){

    int mr=3-m;
    int cr=3-c;

    if(m<0||c<0||m>3||c>3) return 0;

    if(m>0 && m<c) return 0;
    if(mr>0 && mr<cr) return 0;

    return 1;
}

void DLS(int m,int c,int boat,int depth){

    if(depth<0) return;

    if(m==0 && c==0 && boat==0){
        printf("Goal Found\n");
        return;
    }

    int moves[5][2]={{1,0},{2,0},{0,1},{0,2},{1,1}};

    for(int i=0;i<5;i++){

        int nm=m,nc=c,nb=!boat;

        if(boat==1){
            nm-=moves[i][0];
            nc-=moves[i][1];
        }
        else{
            nm+=moves[i][0];
            nc+=moves[i][1];
        }

        if(isValid(nm,nc))
            DLS(nm,nc,nb,depth-1);
    }
}

int main(){

    DLS(3,3,1,10);

}
