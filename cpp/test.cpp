#include<iostream>
using namespace std;
int checkSystem()
{
  union check
  {
      int i;
      char ch;
  } c;
  c.i = 1;
  return (c.ch ==1);//如果当前系统为大端模式这个函数返回0；如果为小端模式，函数返回1。
}
int main(){
    cout << checkSystem() << endl;
    return 0;
}