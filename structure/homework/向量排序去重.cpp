#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
class T{
    private:
      int x;
      int y;
    public:
      T(int x, int y);
      bool operator<(const T &b) const;
      bool operator==(const T &b) const;
      friend istream &operator>>(istream &is, T &a);
      friend ostream &operator<<(ostream &os, T &a);
};
T::T(int x,int y){
    this->x = x;
    this->y = y;
}
bool T::operator<(const T &b) const{
    if (x > b.x)
        return 0;
    if (x < b.x)
        return 1;
    else{
        if (y > b.y)
            return 0;
        else
            return 1;
    }
}
bool T::operator==(const T &b) const{
    return x == b.x && y == b.y;
}
istream &operator>>(istream &is, T &a){
    is >> a.x >> a.y;
    return is;
}
ostream &operator<<(ostream &os, T &a){
    os << a.x << " " << a.y;
    return os;
}
int main(){
    int n;
    cin >> n;
    T t(0,0);
    vector<T> a(n,t);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m;
    m = unique(a.begin(), a.end()) - a.begin();
    for (int i = 0; i < m; i++){
        cout << a[i] << endl;
    }
    return 0;
}