#include<iostream>
using namespace std;
int main(){
    bool flag = 1;
    int n;
    int a[3];
    int v[3][2];
    cin >> n;
    for (int i = 0; i < 3; i++){
        cin >> v[i][0] >> v[i][1];
        if (n % v[i][0] == 0)
            flag = 0;
        a[i] = (n / v[i][0] + flag) * v[i][1];
    }
    int min = a[0];
    if (min > a[1])
        min = a[1];
    if(min>a[2])
        min = a[2];
    cout << min << endl;
}