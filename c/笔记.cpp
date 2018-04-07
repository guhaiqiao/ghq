// \0和\n都是一个字节的字符
// "a"是两个字节(字符串)，'a'是一个字节
// 转义字符：\n 换行   \b 退格    \a 响铃
//          \r 回车   \t 横向跳格(跳8格扫掉中间的)
//          \v 竖向跳格  \f 走纸换页
//          \\ 输出"\"字符  \' 单引号字符
//tab键跳到下一个8列(输出区)
#include<stdio.h>
#include<iostream>
void print(){
    printf("%c", getchar());
}
void printf()
{
    printf("  ab c\t de\rf\tg\a\n");
    print();
}
// 打印机输出：f-ab-c--gde
// 显示器输出：f-------gde
// 缓冲区fflush(stdin)清空缓冲区 stdlib.h
// 算法优化：计算次数最少，不能忽视可读性
// for循环作用域是大括号里面 眼神要好【捂脸】
// 整数可以越界结束循环
// goto语句：标号的作用范围是所在函数内部
//         常见用法：退出循环、构成循环
void count(){
    char c;
    do
    {
        scanf("%c", &c);
        if(c=='\n')
            goto end;
    } while (1);
    end:
        printf("end!");
}
// 字符数组
void strcat(char *c1, char *c2){
    int j, k;
    for (j = 0; c1[j] != '\0'; j++);
    for (k = 0; c2[k] != '\0';k++){
        c1[j] = c2[k];
        j++;
    }
    c1[j] = '\0';
    printf("%s", c1);
}
int main(){
    void stract(char *c1, char *c2);     //是函数声明！！！！！！！！，不是调用！！！！
    char c1[10], c2[10];
    scanf("%s", c1);
    scanf("%s", c2);
    strcat(c1, c2);
    return 0;
}
// 一个变量要只有一个功能，令人窒息