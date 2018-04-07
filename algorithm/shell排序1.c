#include <stdio.h>
#include <stdlib.h>
void printArray(int *a,int n){
    for (int i = 0; i < n; i++){
        printf("%4d",*(a+i));
    }
    printf("\n");
}
void shellsort(int a[],int n){
    int gap;
    int i, j;
    int temp;
    // printf("initial sorting: ");
    // printArray(a, n);
    for (gap = n / 2;; gap /= 2){
        for (i = gap; i < n; i++)
        {
            temp = a[i];
            for (j = i - gap; j >=0 && a[j] > temp; j -= gap)
                a[j + gap] = a[j];
            a[j + gap] = temp;
        }
        if (gap == 0)
            break;
        printf("gap=%d:\n", gap);
        printArray(a, n);
    }
}
int main(){
    int *a, n;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &*(a + i));
    }
    shellsort(a, n);
    free(a);
    return 0;
}