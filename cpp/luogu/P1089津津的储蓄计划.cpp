#include<iostream>
using namespace std;
int main(){
    int a[12], money, total = 0;
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    money = 0;
    for (int i = 0; i < 12; i++){
        money = money + 300 - a[i];
        if (money < 0){
            cout << "-" << i + 1 << endl;
            break;
        }
        while (money >= 100){
            money -= 100;
            total += 100;
        }
    }
    if (money >= 0){
        money += total * 1.2;
        cout << money << endl;
    }
    return 0;
}