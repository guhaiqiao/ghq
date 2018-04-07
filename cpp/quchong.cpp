#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // vector<int> l(a, a + n);
    sort(a, a + n);
    int m;
    m = unique(a, a + n) - a;
    for (int i = 0; i < m; i++){
        cout << a[i] << endl;
    }
        return 0;
}