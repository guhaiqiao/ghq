#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;
    int i = 1;
    double sinx = 0;
    const double PI = 3.1415926536;
    double x = PI / 3;
    a = x;
    while(abs(a)>0.000001){
        sinx += a;
        a = a * (-1) * x * x / (2 * i + 1) / 2 * i;
        i++;
        cout << a << endl;
    }
    cout << sinx;
    return 0;
}