#include<iostream>
using namespace std;
template<class T>
class vector{
    private: T* array;int _size=50;
    public:
      vector(int size);
      ~vector();
      T &operator[](int n);
      vector(vector &a);
      vector<T> &operator=(vector<T> &a);
};
template <class T>
vector<T> &vector<T>::operator=(vector<T> &a)
{
    if (&a != *this)
    {
        if (_size != a._size)
        {
            delete[] array;
            _size = a._size;
            array = new T[_size];
        }
        for (int i = 0; i < _size; i++)
        {
            array[i] = a.array[i];
        }
        return *this;}
}
template<class T>
vector<T>::vector(int size):_size(size){
    array=new T [_size];
}
template<class T>
vector<T>::~vector(){
    delete[] array;
}
template<class T>
T& vector<T>::operator[](int n){
    return array[n];
}
template<class T>
vector<T>::vector(vector<T> & a){
    _size = a._size;
    array = new T[_size];
    for (int i = 0; i < _size; i++)
    {
        array[i] = a.array[i];
    }
}
int main(){
    vector<int> a(30);
    return 0;
}