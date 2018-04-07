#include<stdio.h>
int main(){
    int n;
    int count = 0;
    scanf("%d",&n);
    for (int i = 0; i <= 100 - n; i++)
    {
        if ((100 - n - i) % 4 == 0 && (100 - n - i) / 4 + i <= n)
            count++;
    }
    printf("%d", count);
    return 0;
}