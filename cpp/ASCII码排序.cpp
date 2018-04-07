#include<iostream>
using namespace std;
void swap(char &x,char &y){
    if (x > y){
        int t;
        t = x;
        x = y;
        y = t;
    }
}
void swap(char &x, char &y, char &z){
    swap(x, y);
    swap(x, z);
    swap(y, z);
}
int main()
{
    char a;
    while (cin >> a){
        char b;
        char c;
        cin >> b >> c;
        swap(a, b, c);
        cout << a << " " << b << " " << c << endl;
    }
}