#include<iostream>
#include<iomanip>
using namespace std;
int pow(int h){
    int s = 1;
    for (int i = 0; i < h; i++)
        s *= 10;
    return s;
}
int main(){
    int m,n,p=0;
    double a;
    cin >> m >> n >> a;
    int zheng;
    zheng = (int)a;
    int hh = zheng;
    while(hh!=0){
        hh = hh / 10;
        p++;
    }
    if (m == 0 && n == 0){
        a = 0;
    }
    else{
        if (m >= p)
        {
            for (int i = 0; i < m - p; i++)
                cout << 0;
        }
        if (m < p)
        {
            a -= zheng;
            zheng = zheng % pow(m);
            a = a + zheng;
        }
    }
        cout << setiosflags(ios::fixed) << setprecision(n) << a << endl;
    return 0;
}