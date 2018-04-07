#include<iostream>
#include<queue>
using namespace std;
void bfs(int n,int k){
    int state[100001]={0};
    int x;
    queue<int> qu;
    if(!qu.empty())
        qu.pop();
    state[n] = 1;
    qu.push(n);
    while(!qu.empty()){
        x = qu.front();
        if (x == k)
            break;
        qu.pop();
        if (x - 1 > 0 && state[x-1] == 0){
            qu.push(x - 1);
            state[x - 1] = state[x] + 1;
        }
        if (x + 1 < 100001 && state[x+1] == 0){
            qu.push(x - 1);
            state[x - 1] = state[x] + 1;
        }
        if (x * 2 < 100001 && state[x * 2] == 0){
            qu.push(x * 2);
            state[x*2] = state[x] + 1;
        }
    }
    cout << state[k] -1 << endl;
}
int main(){
    int n,k;
    cin >> n >> k;
    bfs(n, k);
    return 0;
}