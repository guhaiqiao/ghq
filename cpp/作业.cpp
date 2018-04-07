#include<iostream>
using namespace std;
long pow(int n){
    long long sum = 1;
    for (int i = 0; i < n; i++){
        sum *= 2;
    }
    return sum;
}
int main(){
    cout << pow(16) - 1 << endl;
    return 0;
}