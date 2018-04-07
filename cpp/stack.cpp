#include<stack>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    stack<char> c;
    string str;
    cin >> str;
    for (string::iterator iter = str.begin(); iter != str.end(); iter++){
        if (*iter == '('){
            c.push(*iter);
        }
        if (*iter == ')')
        {
            c.pop();
        }
    }

    if(!c.empty())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}