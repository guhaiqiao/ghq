#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool judge(int n){
    int m = 1;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0)
            m = i;
    }
    if (m != 1)
        return false;
    else
        return true;
}
bool prime(int n){
    int i;
    for (i = 2; n % i != 0;i++);
    if (n == i)
        return true;
    else
        return false;
}
int main(){
    int n;
    cin >> n;
    int m = 0;
    for (int i = 2; i < n; i++){
        if (judge(i) && (i % 10 != 9)){
            m++;
            cout << setiosflags(ios::left) << setw(4) << i;
            if (m % 10 == 0)
                cout << endl;
        }
    }
    return 0;
}