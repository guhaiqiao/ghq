#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 0;
    double s = 0;
    cin >> n;
    while (s <= n){
        i++;
        s += 1.0 / i;
    }
    cout << i << endl;
    return 0;
}