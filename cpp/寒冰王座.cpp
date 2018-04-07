#include<iostream>
using namespace std;
int tip(int n,int N){
    int total = 0;
    total = (N - n * 150) % 200;
    if(total==0)
        return 0;
    if (n > 0 && total != 0)
        return min(total, tip(n - 1, N));
    else
        return min(total, N % 200);
}
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int N;
        cin >> N;
        int t;
        t = N / 150;
        cout << tip(t,N) << endl;
    }
    return 0;
}