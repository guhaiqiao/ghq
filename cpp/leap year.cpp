#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int N;
        int year;
        int num = 1;
        cin >> year >> N;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            year += 0;
        else
        {
            year = 4 - year % 4 + year;
            if (year % 100 == 0 && year % 400 != 0)
                year += 4;
        }
        while (num < N){
            year += 4;
            if (year % 100 != 0 || year % 400 == 0)
                num++;
        }
        cout << year << endl;
    }
    return 0;
}