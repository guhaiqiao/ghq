#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int flag = 0;
    gets(str);
    for (int i = 0; i < strlen(str) - 1; i = i + 1)
    {
        if (str[i] == 'i' && str[i + 1] == 's')
        {
            str[i] = 'b';
            str[i + 1] = 'e';
            flag = 1;
        }
    }
    if (flag == 0)
        printf("There is no 'is' in the string\n");
    else
        puts(str);
    return 0;
}