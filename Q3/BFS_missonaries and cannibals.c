#include <stdio.h>

typedef struct {
    int m_left, c_left, boat;
} State;

State queue[100];
int front = 0, rear = 0;

int visited[4][4][2];

int isValid(int m, int c) {

    int m_right = 3 - m;
    int c_right = 3 - c;

    if(m < 0 || c < 0 || m > 3 || c > 3)
        return 0;

    if(m > 0 && m < c)
        return 0;

    if(m_right > 0 && m_right < c_right)
        return 0;

    return 1;
}

void BFS() {

    State start = {3,3,1};

    queue[rear++] = start;
    visited[3][3][1] = 1;

    int moves[5][2] = {{1,0},{2,0},{0,1},{0,2},{1,1}};

    while(front < rear) {

        State s = queue[front++];

        if(s.m_left == 0 && s.c_left == 0 && s.boat == 0) {
            printf("Goal Reached\n");
            return;
        }

        for(int i=0;i<5;i++) {

            State next = s;

            if(s.boat == 1) {
                next.m_left -= moves[i][0];
                next.c_left -= moves[i][1];
            }
            else {
                next.m_left += moves[i][0];
                next.c_left += moves[i][1];
            }

            next.boat = !s.boat;

            if(isValid(next.m_left,next.c_left) &&
               !visited[next.m_left][next.c_left][next.boat]) {

                visited[next.m_left][next.c_left][next.boat] = 1;
                queue[rear++] = next;
            }
        }
    }

    printf("No Solution\n");
}

int main() {
    BFS();
}
