#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100000];
    int m;
    int n;
    cin >> n;
    getchar();
    while(n--){
        gets(a);
        m = 0;
        for (int i = 0; i < strlen(a); i++){
            if (a[i] < 0)
                m++;
        }
        cout << m / 2 << endl;
    }
    return 0;
}