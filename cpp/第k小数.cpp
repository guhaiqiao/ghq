#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // vector<int> s(a, a + n);
    sort(a,a+n);
    cout << a[k - 1];
    return 0;
}
