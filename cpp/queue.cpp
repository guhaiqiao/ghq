#include<iostream>
#include<queue>
#include<iterator>
using namespace std;
int main(){
    queue<int> c;
    c.push(10);
    iterator iter=c.begin();
    cout << c.front() << endl;
    cout << (c.back() == c.front()) << endl;
    c.emplace(20);
    cout << (c.back() == 20);
    return 0;}