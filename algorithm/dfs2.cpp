#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int op[4][2] = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}
};
int n, m, k;
struct node{
    int x, y;
    int square;
    node(int x,int y){
        this->x = x;
        this->y = y;
    }
    node(){}
};
int in(node &nd){
    return nd.x > 0 && nd.x <= n && nd.y > 0 && nd.y <= n;
}
int main(){
    int x, y;
    int state[101][101];
    int num[101];
    stack<node> st;
    node temp, next;
    while (cin >> n >> m >> k){
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                state[i][j] = 1;
        for (int i = 0; i < 101; i++)
            num[i] = 0;
        int ans = -1;
        while (k--){
            cin >> x >> y;
            state[x][y] = 0;
        }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++){
                if (state[i][j] == 0){
                    node start(i, j);
                    start.square = 0;
                    st.push(start);
                    state[i][j] = 1;
                    while(!st.empty()){
                        temp = st.top();
                        st.pop();
                        for (int h = 0; h < 4; h++){
                            next.x = temp.x + op[i][0];
                            next.y = temp.y + op[i][1];
                            if (in(next) && state[next.x][next.y] == 0)
                            {
                                next.square = temp.square + 1;
                                st.push(next);
                            }
                        }
                    }
                    ans++;
                    num[ans] = st.top().square;
                }
            }
        sort(num, num + ans + 1);
        cout << num[ans] << endl;
    }
    return 0;
}