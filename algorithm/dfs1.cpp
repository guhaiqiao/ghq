#include<iostream>
#include<algorithm>
using namespace std;
int state[101][101];
int num[101];//保存每个点所在的的面积
int ans, n, m;
void dfs(int x,int y){
    if (state[x][y] == 1 || x < 1 || x > n || y < 1 || y > m)
        return;
    num[ans]++;
    state[x][y] = 1;//已被遍历
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}
int main(){
    int k, x, y;
    while (cin >> n >> m >> k){
        ans = -1;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                state[i][j] = 1;//初始化
        for (int i = 0; i < 101; i++)
            num[i] = 0;
        while(k--){
            cin >> x >> y;
            state[x][y] = 0;//标记被淹没的
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (state[i][j] == 0){
                    ans++;
                    dfs(i, j);
                }
            }
        }
        sort(num, num + ans + 1);
        cout << num[ans] << endl;
    }
    return 0;
}