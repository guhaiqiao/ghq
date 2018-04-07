#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n != 0){
        int total = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        total += n * 5;
        total += (a[0] - 0) * 6;
        for (int i = 0; i < n-1; i++)
        {
            if (a[i + 1] >= a[i]){
                total += 6 * (a[i + 1] - a[i]);
            }
            else
            {
                total += 4 * (a[i] - a[i + 1]);
            }
        }
        cout << total << endl;
        cin >> n;
    }
    return 0;
}