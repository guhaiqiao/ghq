#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main(){
    int T;
    int a, b, c, d;
    cin >> T;
    while (T--){
        cin >> a >> b >> c >> d;
        int m;
        int n;
        m = a * d + b * c;
        n = b * d;
        int t = m;
        int s = n;
        swap(m, n);
        while (m != n){
            swap(m, n);
            m = m - n;
        }
        t = t / m;
        s = s / m;
        // cout << m;
        cout << t << " " << s << endl;
    }
}
void swap(int &x, int &y)
{
    if (x < y)
    {
        int t;
        t = x;
        x = y;
        y = t;
    }
}