#include<iostream>
#include<string>
using namespace std;
int number[4];
int zhuan(string s);
bool dfs(int n);
int main(){
    string a[4];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
        for (int i = 0; i < 4; ++i){
            number[i] = zhuan(a[i]);
        }
        if (dfs(4))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
int zhuan(string s){
    if (s == "A")
        return 1;
    if (s == "J")
        return 11;
    if (s == "Q")
        return 12;
    if (s == "K")
        return 13;
    if (s == "10")
        return 10;
    return s[0] - '0';
}
void swap(int a,int b){
    if (a < b){
        int t = b;
        b = a;
        a = t;
    }
}
bool dfs(int n){
    if (n == 1){
        if (number[0] == 24)
            return true;
        else
            return false;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            int a = number[i];
            int b = number[j];
            swap(a, b);
            number[j] = number[n - 1];
            number[i] = a + b;
            if (dfs(n - 1))
                return true;
            number[i] = a - b;
            if (dfs(n - 1))
                return true;
            number[i] = a * b;
            if(dfs(n-1))
                return true;
            if (b != 0 && (a % b) == 0){
                number[i] = a / b;
                if (dfs(n - 1))
                    return true;
            }
            number[i] = a;
            number[j] = b;
        }
    }
    return false;
}