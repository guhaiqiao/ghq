// 差了一个0！！！，窒息
#include<iostream>
using namespace std;
void reverse(int n){
    int number = 0;
    long long t = n;
    while (n != 0){
        n /= 10;
        number++;
    }
    if (t < 0){
        t = -t;
        cout << "-";
    }
    int a[number];
    for (int i = 0; i < number; i++){
        a[i] = t % 10;
        t /= 10;
    }
    int w = 0;
    for (int i = 0; i < number; i++){
        if (a[i] != 0){
            w = i;
            break;
        }
    }
    for (int i = w; i < number; i++){
        cout << a[i];
    }
    for (int i = 0; i < w; i++){
        cout << 0;
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++){
        long long t;
        cin >> t;
        if (t == 0)
            cout << t << endl;
        else
            reverse(t);
    }
    return 0;
}