#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    int i;
    int l = a.length();
    int m = b.length();
    int count = 0;
    for(i = 0; i <= (l - m); i++)
    {
        if (a.substr(i, m) == b)
            count++;
    }
    cout << count<<endl;
    return 0;
}