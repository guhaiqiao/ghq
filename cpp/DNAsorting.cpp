// 两个顺序一起变
#include<iostream>
using namespace std;
int main(){
    int n;
    int length;
    cin >> length >> n;
    char **a = new char *[n];
    int b[n];
    for (int i = 0; i < n;i++)
        b[i] = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = new char[length];
        cin >> a[i];
        for (int m = 0; m < length; m++)
        {
            for (int j = m + 1; j < length; j++)
            {
                if (a[i][m] > a[i][j])
                    b[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j > i; j--)
            if (b[j] < b[j - 1]){
                int temp = b[j]; /*swap*/
                b[j] = b[j - 1];
                b[j - 1] = temp;

                char *tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << endl;
    }
    return 0;
}