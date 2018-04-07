#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double l,int i,int j){
    double r;
    r= l - 0.500*pow(0.1,i);
    if(r>=pow(10,j-1)) r =int(r)%int(pow(10,j))+ (r-int(r));
    return r;
}
int main(){
    int m,n;
    double k;
    cin>>m>>n>>k;
    if(m == 0 && n == 0) cout<<0<<endl;
    else if(n == 0) cout<<setfill('0')<<setw(m)<< int(k)<<endl;
    else{
        cout<<setfill('0')<<setw(m+n+1)<<setiosflags(ios::fixed)<<showpoint<<setprecision(n)<<f(k,n,m)<<endl;

    }
    return 0;
}

