#include<iostream>
using namespace std;
int main(){
    float a;
    cin >> a;
    while (a != 0){
        double n = 0;
        float total = 0;
        while (total < a){
            n++;
            total += 1 / (n + 1);
        }
        cout << n << " card(s)" << endl;
        cin >> a;
    }
    return 0;
}