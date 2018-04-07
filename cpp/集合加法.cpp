#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while (cin >> n){
        int m;
        cin >> m;
        int a[m + n];
        // int *a = new int(m + n);
        for (int i = 0; i < m + n; i++)
            cin >> a[i];
        sort(a,a + m + n);
        int w = unique(a, a + m + n) - a;
        for (int i = 0; i < w - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[w - 1] << endl;
    }
    return 0;
}