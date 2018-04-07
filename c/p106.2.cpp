#include<stdio.h>
long jc(int n){         //计算阶乘
    long m = 1;
    for (int i = 1; i <= n;i++)
        m *= i;
    return m;
}
long pow(int n){        //计算2^n
    long m = 1;
    for (int i = 0; i < n; i++)
        m *= 2;
    return m;
}
long cal(int n){        //计算s
    long s = 0;
    for (int i = 0; i < n; i++)
        s += jc(n) * pow(n);
    return s;
}
int main(){
    int n;
    scanf("%d", &n);
    // printf("%ld\n",jc(n));
    // printf("%ld\n",pow(n));
    printf("%ld", cal(n));
    return 0;
}