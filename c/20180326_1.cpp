// 1：从键盘上输入一个长度不超过10个字符的字符串，判断字符串中是否含有字符a和字符0~9，
    //如果有的话，分别统计出这些字符个数，然后将上述字符删除后输出剩余的字符串。
#include<stdio.h>
int number_num[10];
int main(){
    char c[11];
    int a_num = 0;
    scanf("%s",c);
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count = 0;
        if ((c[i] >= '0') && (c[i] <= '9'))
        {
            int num = c[i]-'0';
            number_num[num]++;
            count++;
            for (int j = i; c[j] != '\0'; j++)
                c[j] = c[j + 1];
        }
        else if (c[i] == 'a')
        {
            a_num++;
            for (int j = i; c[j] != '\0'; j++)
                c[j] = c[j + 1];
            count++;
        }
        if(count)
            i--;
        // else
        //     printf("%c", c[i]);
    }
    printf("a_num=%d\n", a_num);
    for (int i = 0; i < 10; i++){
        if (number_num[i] != 0)
            printf("%d_num=%d\n", i, number_num[i]);
    }
    printf("%s", c);
}