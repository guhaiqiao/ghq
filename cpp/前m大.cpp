#include<iostream>
#include<algorithm>
using namespace std;
int a[1000001];
int main(){
    int n,m;
    while(cin >> n >> m){
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n,greater<int>());
        for (int i = 0; i < m-1; i--){
            cout << a[i] << " ";
        }
        cout << a[m] << endl;
    }
    return 0;
}