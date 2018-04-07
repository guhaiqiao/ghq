#include<iostream>
using namespace std;
int main(){
    double s, total = 0, i = 2.0;
    int x = 0;
    cin >> s;
    while (total <= s){
        total += i;
        i *= 0.98;
        x++;
    }
    cout << x;
    return 0;
}