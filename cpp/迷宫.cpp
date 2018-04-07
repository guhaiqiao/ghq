#include <iostream>
#include <queue>
using namespace std;
#define DIRECTSIZE 4
struct direct {
    int drow;
    int dcol;
} direct[DIRECTSIZE] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int maze[7][7];
struct node {
    int row;
    int col;
};
node father[7][7];
queue<node> q;
void print()
{
    node path[7*7];
    int count = 0;
    path[count].row = 5;
    path[count].col = 5;
    for(;;) {
        if(path[count].row == 1 && path[count].col == 1)
            break;
        path[count+1] = father[path[count].row][path[count].col];
        count++;
    }
    while(count >= 0) {
        cout << "(" << path[count].row - 1 << "," << path[count].col - 1 << ")" << endl;
        count--;
    }
}

void bfs()
{
    node start;
    start.row = 1;
    start.col = 1;
    q.push(start);
    while(!q.empty()) {
        node front = q.front();
        q.pop();
        if (front.row == 5 && front.col == 5) {
            print();
            return;
        }
        for(int i=0; i<DIRECTSIZE; i++) {
            int nextrow = front.row + direct[i].drow;
            int nextcol = front.col + direct[i].dcol;
            if(maze[nextrow][nextcol] == 0) {
                father[nextrow][nextcol] = front;
                node v;
                v.row = nextrow;
                v.col = nextcol;
                q.push(v);
            }
        }

        maze[front.row][front.col] = 1;
    }
}
int main(){
    int i, j;
    for(i=0; i<7; i++) {
        maze[0][i] = 1;
        maze[6][i] = 1;
        maze[i][0] = 1;
        maze[i][6] = 1;
    }
    for (i = 1; i <= 7; i++)
        for (j = 1; j <= 7; j++)
            cin >> maze[i][j];
    bfs();
    return 0;
}