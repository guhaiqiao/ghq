// 2：从键盘上输入自定义的5个学生信息，内容包含学号（字符串，8位）、姓名（长度自定义）、性别（F/M）、
//    程序设计课程成绩（浮点数），然后输入学生的学号进行匹配查找，如果找到相应信息，则输出；
//    如果没有找到，给出不存在的提示。
#include<iostream>
#include<cstring>
using namespace std;
class student{
    private:
      string _number;
      string _name;
      char _sex;
      float _score;
    public:
      student(){}
      ~student(){}
      string getnumber(){
          return this->_number;
      }
      friend istream &operator>>(istream &is,  student &s);
      friend ostream &operator<<(ostream &os,  student &s);
};
istream & operator>>(istream &is, student &s){
    is >> s._number >> s._name >> s._sex >> s._score;
    return is;
}
ostream & operator<<(ostream &out, student &s){
    out << s._number << " " << s._name << " " << s._sex << " " << s._score ;
    return out;
}
int main(){
    student a[5];
    string number;
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    cin >> number;
    int flag = 0;
    for (int i = 0; i < 5; i++)
        if (a[i].getnumber().compare(number) == 0)
        {
            cout << a[i];
            flag = 1;
            break;
        }
    if (0 == flag)
        cout << "no such student" << endl;
    return 0;
}