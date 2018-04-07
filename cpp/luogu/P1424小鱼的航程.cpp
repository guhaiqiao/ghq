#include<iostream>
using namespace std;
int main(){
    long i, x, n, total = 0;
    cin >> x >> n;
    for (i = x; i < n + x ; i++)
    {
        if ((i % 7 + 1) != 1 && (i % 7 + 1) != 7)
            total += 250;
    }
    cout << total;
    return 0;
}