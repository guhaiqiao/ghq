#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << "    February 2018" << endl;
    cout << "Su Mo Tu We Th Fr Sa" << endl;
    cout << "            ";
    for (int i = 1; i < 28; i++){
        cout << setw(2) << i;
        if(i%7==3)
            cout << endl;
        else
            cout << " " ;
    }
    cout << 28;
    return 0;
}