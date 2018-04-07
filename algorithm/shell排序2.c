#include<stdio.h>
#include<stdlib.h>
void printArray(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("%4d", *(a + i));
    }
    printf("\n");
}
void shell(int a[],int n){
    int gap = n / 3 + 1;
    int i, j, temp;
    for (;; gap = gap / 3 + 1){
        for (i = gap; i < n; i++){
            temp = a[i];
            for (j = i - gap; j >= 0 && a[j] > temp; j -= gap)
                a[j + gap] = a[j];
            a[j + gap] = temp;
        }
        printf("gap is %d:\n", gap);
        printArray(a, n);
        if (gap == 1)
            break;
    }
}
int main(){
    int *a, n;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &*(a + i));
    }
    shell(a,n);
    free(a);
    return 0;
}