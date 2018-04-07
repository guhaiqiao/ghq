#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a;
    float sum = 0;
    cin >> a;
    if (a > 400){
        sum += (a - 400) * 0.5663;
        a = 400;
    }
    if (a > 150){
        sum += (a - 150) * 0.4663;
        a = 150;
    }
    if (a >= 0)
        sum += a * 0.4463;
    printf("%.1f", sum);
    return 0;
}