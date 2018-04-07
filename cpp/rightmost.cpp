#include<iostream>
using namespace std;
int m(int n){
    if (n % 4 == 0)
        return 4;
    else
        return n % 4;
}
int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        long n;
        cin >> n;
        int t;
        int total=1;
        t = n % 10;
        for (long j = 0; j < m(n); j++)
        {
            total *= t;
            total %= 10;
        }
        cout << total << endl;
    }
    return 0;
}