#include <cmath>
#include <iostream>
using namespace std;
int n, m;
int *r = new int[m];
int *h = new int[m];
void dfs(int m){
    if (m < 0)
        return;
    for (int i = m; i >= 0; i--){
        r[m - 1] = i;
        while (r[m - 1] > r[m])
            r[m]--;
        dfs(m - 1);
    }
}
int main(){
    cin >> n >> m;
    int k = sqrt(n);

}