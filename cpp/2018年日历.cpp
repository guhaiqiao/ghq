#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;
bool year(int n){
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return true;
    else
        return false;
}
int day(int n){
    int day = 0;
    for (int i = 2018; i < n; i++){
        if (year(i) == 1){
            day += 366;
        }
        else
        {
            day += 365;
        }
    }
    return day;
}
int number(int n,int m){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total=365;
    int number=0;
    if (year(n) == 1)
    {
        a[1] = 29;
        total = 366;
    }
    switch(m){
        case(1):
            total -= a[0];
        case(2):
            total -= a[1];
        case(3):
            total -= a[2];
        case(4):
            total -= a[3];
        case(5):
            total -= a[4];
        case(6):
            total -= a[5];
        case(7):
            total -= a[6];
        case(8):
            total -= a[7];
        case(9):
            total -= a[8];
        case(10):
            total -= a[9];
        case(11):
            total -= a[10];
        case(12):
            total -= a[11];
        default:
            break;
    }
    total += day(n);
    number = total % 7 + 1;
    return number;
}
int main(){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n,m;
    cin >> n >> m;
    assert(n >= 2018);
    assert(m >= 1 && m <= 12);
    if(year(n)==1)
        a[1] = 29;
    cout << "    ";
    switch(m){
        case(1):
            cout << "January";
            break;
        case(2):
            cout << "February";
            break;
        case(3):
            cout << "March";
            break;
        case(4):
            cout << "April";
            break;
        case(5):
            cout << "May";
            break;
        case(6):
            cout << "June";
            break;
        case(7):
            cout << "July";
            break;
        case(8):
            cout << "August";
            break;
        case(9):
            cout << "September";
            break;
        case(10):
            cout << "October";
            break;
        case(11):
            cout << "November";
            break;
        case(12):
            cout << "December";
            break;
        default:
            break;
    }
    cout << " ";
    cout << n << endl;
    cout << "Su Mo Tu We Th Fr Sa" << endl;
    for (int i = 1; i <= (3 * number(n,m))% 21; i++)
        cout << " ";
    for (int i = 1; i < a[m - 1]; i++)
    {
        cout << setw(2) << i;
        if (i % 7 == (7 - number(n,m) % 7) || (number(n,m) == 7 && i % 7 == 0))
            cout << endl;
        else
            cout << " ";
    }
    cout << a[m-1];
    return 0;
}