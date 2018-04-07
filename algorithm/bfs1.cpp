#include <iostream>
#include <queue>
using namespace std;
struct node{
  int floor;
  int step;
};
int main(){
    int n, h[201], z[201], a, b,next;
    queue<node> qu;
    node start, temp;
    while (cin >> n && n != 0)
    {
        cin >> a >> b;
        while (!qu.empty())
            qu.pop();
        for (int i = 1; i <= n; i++)
        {
            cin >> h[i];
            z[i] = 0;
        }
        start.floor = 1;
        start.step = 0;
        qu.push(start);
        z[start.floor] = 1;
        while (!qu.empty())
        {
            temp = qu.front();
            if (temp.floor == b)
                break;
            qu.pop();
            next = temp.floor + h[temp.floor];
            if (next <= n && z[next] == 0)
            {
                start.floor = next;
                start.step = temp.step + 1;
                qu.push(start);
                z[start.floor] = 1;
            }
            next = temp.floor - h[temp.floor];
            if ( next>= 1 && z[next] == 0){
                start.floor = next;
                start.step = temp.step + 1;
                qu.push(start);
                z[start.floor] = 1;
            }
        }
        if (!qu.empty())
            cout << qu.front().step << endl;
        else
            cout << -1;
    }
    return 0;
}