#include <cassert>
#include <iomanip>
#include <iostream>
using namespace std;
class calendar{
    private:
        int year;
        int month;
    public:
      calendar(int y, int m){
          assert(y >= 2018 && m >= 1 && m <= 12);
          year = y;
          month = m;
      }
      ~calendar(){}
      int day();
      int number();
      void print();
};
bool leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}
int calendar::day(){
    int day = 0;
    for (int i = 2018; i < year; i++){
        if (leapyear(i)){
            day += 366;
        }
        else
        {
            day += 365;
        }
    }
    return day;
}
int calendar:: number(){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total=365;
    int number=0;
    if (leapyear(year))
    {
        a[1] = 29;
        total = 366;
    }
    switch(month){
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
    total += day();
    number = total % 7 + 1;
    return number;
}
void calendar:: print(){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(leapyear(year))
        a[1] = 29;
    cout << "    ";
        switch(month){
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
        cout << year << endl;
        cout << "Su Mo Tu We Th Fr Sa" << endl;
        for (int i = 1; i <= (3 * number())% 21; i++)
        cout << " ";
        for (int i = 1; i < a[month - 1]; i++){
            cout << setw(2) << i;
            if (i % 7 == (7 - number() % 7) || (number() == 7 && i % 7 == 0))
                cout << endl;
            else
                cout << " ";
        }
    cout << a[month-1];
}
int main(){
    calendar c(2018,2);
    c.print();
    return 0;
}