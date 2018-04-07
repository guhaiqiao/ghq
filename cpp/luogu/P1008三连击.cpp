#include<iostream>
using namespace std;
int d[10];
void cf(int x){
    while (x != 0){
        int gx = x % 10;
        x /= 10;
        d[gx]++;
    }
}
int main(){
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 9; j++)
            for (int k = 1; k <= 9; k++){
                int a = i * 100 + j * 10 + k;
                cf(a);
                cf(2 * a);
                cf(3 * a);
                if(d[1]==1&&d[2]==1&&d[3]==1&&d[4]==1&&d[5]==1&&d[6]==1&&d[7]==1&&d[8]==1&&d[9]==1){
                    cout << a << " " << a * 2 << " " << a * 3 << endl;
                }
                for (int l = 0; l < 10; l++)
                    d[l] = 0;
            }
    return 0;
}
