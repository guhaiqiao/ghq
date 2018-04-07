#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> s;
    string c;
    while(1){
        cin >> c;
        if (c == "QUIT")
            break;
        else{
            s[c]++;
            cout << s[c] - 1 << endl;
        }
    }
    return 0;
}