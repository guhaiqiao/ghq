#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    const int length = 1000;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a[length];
        int b[length];
        fill(a + 1, a + length, -1);
        fill(b + 1, b + length, -1);
        a[0] = 0;
        b[0] = 0;
    }
}