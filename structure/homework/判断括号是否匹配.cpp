#include<iostream>
#include<vector>
#include<stack>
#include<cstring>
using namespace std;
int judge(int a[],int length){
    stack<int> st;
    int begin = a[0];
    int k = 1;
    st.push(begin);
    while (k < length)
    {
        int next = a[k];
        if (next == 1 || next == 2 || next == 3)
            st.push(next);
        else switch(next){
            case -1:
                if (st.top() == 1)
                    st.pop();
                else
                    return 0;
                break;
            case -2:
                if (st.top() == 2)
                    st.pop();
                else return 0;
                break;
            case -3:
                if (st.top() == 3)
                    st.pop();
                else
                    return 0;
                break;
        }
        k++;
    }
    return 1;
}
int main(){
    char str[10];
    // int n;
    int length = strlen(str);
    int a[length];
    // cin >> n;
    // for (int i = 0; i < n; i++){
        cin >> str;
        for (int j = 0; j < length; j++){
            if(str[j]=='(')
                a[j] = 1;
            if(str[j]==')')
                a[j] = -1;
            if(str[j]=='[')
                a[j] = 2;
            if(str[j]==']')
                a[j] = -2;
            if(str[j]=='{')
                a[j] = 3;
            if(str[j]=='}')
                a[j] = -3;
            cout << a[j] << endl;
        }
        // cout << judge(a, length);
    // }
    return 0;
}