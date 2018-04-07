#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i;
    for (i = 1; i < 10; i++){
        int a = i * (sqrt(5) + 1) / 2;
        cout << a << endl;
    }
    return 0;
}