#include<iostream>
using namespace std;
int main(){
    int n, m, c;
    long long a[25], b[25];
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i < 21; i++){
        a[i] = a[i - 1] * i;
    }
    b[0] = 0;
    b[1] = 0;
    b[2] = 1;
    for (int i = 3; i < 21; i++){
        b[i] = (i - 1)*(b[i - 1] + b[i - 2]);
    }
    cin >> c;
    while(c--){
        cin >> n >> m;
        cout << a[n] / a[m] / a[n - m] * b[m] << endl;
    }
    return 0;
}