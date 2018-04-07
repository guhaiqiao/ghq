#include<iostream>
#include<queue>
using namespace std;
struct node{
    int x, y;
    int step;
    bool operator==(node &n){
        return x == n.x && y == n.y;
    }
};
node start, tend;
int way[8][2] = {
    {2, -1}, {2, 1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};
bool in(node &n){
    return n.x > 0 && n.x < 9 && n.y > 0 && n.y < 9;
}
int bfs(){
    int state[9][9] = {{0}};
    queue<node> qu;
    node temp, next;
    if (!qu.empty())
        qu.pop();
    qu.push(start);
    start.step = 0;
    state[start.x][start.y] = 1;
    while (!qu.empty()){
        temp = qu.front();
        if (temp == tend)
            break;
        qu.pop();
        for (int i = 0; i < 8; i++){
            next.x = temp.x + way[i][0];
            next.y = temp.y + way[i][1];
            if (in(next) && state[next.x][next.y] == 0){
                state[next.x][next.y] = 1;
                next.step = temp.step + 1;
                qu.push(next);
            }
        }
    }
    if (!qu.empty())
        return qu.front().step;
    else
        return -1;
}
int main(){
    char a, b;
    int x, y;
    int step;
    while (cin >> a >> x >> b >> y){
        start.x = (int)a - 97 + 1;
        start.y = x;
        tend.x = (int)b - 97 + 1;
        tend.y = y;
        step = bfs();
        cout << "from " << a << x << " to " << b << y << " takes " << step << " knight moves" << endl;
    }
    return 0;
}