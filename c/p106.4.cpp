#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//按ctrl+Z结束输入
int main()
{
    string str[100];
    int i = 0;
    int flag = 0;
    while (cin >> str[i])
    {
        int j;
        for (j = 0; j < str[i].length(); j++)
            if (str[i][j] == 'a')
                break;
        if (j == str[i].length())
            i--;
        i++;
    }
    int num = i;
    int a[num];
    for (int j = 0; j < num; j++)
        a[j] = str[j].length();
    sort(a, a + num, greater<int>());
    for (int j = 0; j < num; j++)
        if (str[j].length() == a[0])
            {
                cout << str[j] << endl;
                flag = 1;
            }
    if (flag == 0)
        cout << "There is no string invovles 'a'" << endl;
    return 0;
}