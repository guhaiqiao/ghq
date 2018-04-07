#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double w, C, R, Vs;
    cin >> Vs >> R >> C;
    int n;
    cin >> n;
    while(n--){
        cin >> w;
        double VR;
        VR= w * R * C / sqrt(1 + w * w * R * R * C * C);
        cout << setiosflags(ios::fixed) << setprecision(3) << VR << endl;
    }
    return 0;
}