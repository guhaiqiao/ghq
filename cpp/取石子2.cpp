#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, j, aj, bj;
    while(cin>>a){
        cin >> b;
        if(a==b)
            cout << 1 << endl;
        else{
            int t;
            if (a > b){
                t = a;
                a = b;
                b = t;
            }
            j = a * (sqrt(5) - 1) / 2;
            aj = (j + 1) * (sqrt(5) + 1) / 2;
            bj = aj + j + 1;
            // cout << aj << " " << bj << endl;
            if(a==aj&&b==bj)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}