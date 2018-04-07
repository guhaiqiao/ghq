#include<iostream>
using namespace std;
int pow(int n){
    int sum = 1;
    for (int i = 0; i < n; i++){
        sum *= 10;
    }
    return sum;
}
int reverse(int n){
    int rs = 0;
    int num = 0;
    int m = n;
    while (n != 0){
        n = n / 10;
        num++;
    }
    for (int i = 0; i < num; i++){
        rs += (m % 10)*pow(num-i-1);
        m /= 10;
    }
    return rs;
}
int main(){
    int n;
    int m = 0;
    int num;
    while(cin >> n){
        num = n;
        while (n != reverse(n)){
            n += reverse(n);
            m++;
        }
        cout << m << endl;
        cout << num;
        for (int i = 0; i < m; i++){
            cout << "-->" << (num += reverse(num));
        }
        cout << endl;
    }
        return 0;
}