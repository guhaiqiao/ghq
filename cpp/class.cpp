#include<iostream>
using namespace std;
int i = 0;
class Point{
    private:
      int pi;
    public:
      Point(int i):pi(i){}
      Point(Point &p){
          pi = p.pi;
          cout << "call the copy" << ++i<<endl;
      }
      ~Point(){}
};
class Line{
    private:
       Point _p1,_p2,_p3;
    public:
      Line(Point p1, Point p2, Point p3):_p1(p1),_p2(p2),_p3(p3){}
      Line(Line &l):_p1(l._p1),_p2(l._p2),_p3(l._p3){}
};
int main(){
    Point p1(3);
    Point p2(2);
    Point p3(4);
    Line l1(p1, p2, p3);
    Line l2 = l1;
    // l1 = l2;
    return 0;
}