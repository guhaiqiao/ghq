#include<iostream>
#include<queue>
using namespace std;
struct node{
    int sum;
    int step;
    bool operator==(node &n){
        return this->sum == n.sum;
    }
};
int main()
{
    int n;
    cin >> n;
    queue<node> qu;
    node start, temp, next;
    start.sum = 0;
    start.step = 0;
    qu.push(start);
    while(!qu.empty()){
        temp = qu.front();
        if (temp.step == n)
            break;
        next.sum = temp.sum + 1;

    }
}