#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main(){
    int a;
    while (cin >> a){
        int b;
        cin >> b;
        int total = 0;
        total = a * b;
        while (a != b){
            swap(a, b);
            a = a - b;
        }
        cout << total / a << endl;
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