#include<iostream>
#include<string>
using namespace std;
int number[4];
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
            number[j] = number[n - 1];
            number[i] = a + b;
            if (dfs(n - 1))
                return true;
            number[i] = a - b;
            if (dfs(n - 1))
                return true;
            number[i] = b - a;
            if (dfs(n - 1))
                return true;
            number[i] = a * b;
            if (dfs(n - 1))
                return true;
            if (b != 0 && (a % b) == 0){
                number[i] = a / b;
                if (dfs(n - 1))
                    return true;
            }
            if (a != 0 && (b % a) == 0){
                number[i] = b / a;
                if (dfs(n - 1))
                    return true;
            }
            number[i] = a;
            number[j] = b;
        }
    }
    return false;
}

int zhuan(string c){
    if (c == "A")
        return 1;
    if (c == "J")
        return 11;
    if (c == "Q")
        return 12;
    if (c == "K")
        return 13;
    if (c == "10")
        return 10;
    return c[0] - '0';
}
int main(){
    int i;
    string a[4];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
        for (i = 0; i < 4; ++i)
            number[i] = zhuan(a[i]);
        if (dfs(4))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}