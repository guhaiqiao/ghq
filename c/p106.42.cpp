#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    int begin = 0, end, i = 0;
    int length = 0;
    while (i < strlen(a))
    {
        int flag = 0;
        for (i = begin; a[i] != ' '; i++)
        {
            if(a[i]=='a')
                flag = 1;
        }
        if (flag == 1 && i - begin >= length)
        {
            end = i;
            length = end - begin;
            begin = end + 1;
        }
    }
    if (end == 0)
        printf("There is no 'a'\n");
    else
        for (int i = begin; i < end; i++)
        {
            printf("%c", a[i]);
        }
    return 0;
}