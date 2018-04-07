#include<iostream>
using namespace std;
int main(){
    long long n, x, a, number = 0;
    cin >> n >> x;
    for (long long i = 1; i <= n; i++){
        a = i;
        while (a != 0){
            if (a % 10 == x)
                number++;
            a /= 10;
        }
    }
    cout << number;
    return 0;
}