#include<iostream>
using namespace std;
int c(int m,int n){
    if (m > n)
        return 0;
    else if (m == n || m == 0)
        return 1;
    else
        return c(m, n - 1) + c(m - 1, n - 1);
}
long long mess(int m){
    if (m <= 1)
        return 0;
    else if (m == 2)
        return 1;
    else
        return (m - 1) * (mess(m - 1) + mess(m - 2));
}
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        int m;
        cin >> a >> m;
        cout << mess(m) * c(m, a) << endl;
    }
    return 0;
}