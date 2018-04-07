#include<iostream>
using namespace std;
int main(){
    int a[7];
    int x, y;
    for (int i = 0; i < 7; i++){
        cin >> x >> y;
        a[i] = x + y;
    }
    int max = 0;
    for (int i = 1; i < 7; i++){
        if (a[i] > a[max])
            max = i;
    }
    if (a[max] >= 8)
        cout << max + 1;
    else
        cout << 0;
    return 0;
}