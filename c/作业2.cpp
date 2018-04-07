#include<iostream>
using namespace std;
int main(){
    int total = 0;
    int num;
    for (int i = 100; i < 1000;i++){
        int temp = i;
        while (temp != 0){
            num = temp % 10;
            total += num * num * num;
            temp /= 10;
        }
        if (i == total)
           cout << i << endl;
        total = 0;
    }
    return 0;
}