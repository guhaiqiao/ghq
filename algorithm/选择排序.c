#include<stdio.h>
#include<stdlib.h>
void printArray(int *a,int n){
    for (int i = 0; i < n; i++){
        printf("%4d", *(a + i));
    }
    printf("\n");
}
void sort(int a[],int n){
    int i, j, temp;
    int count = 0;
    printf("initial sorting: ");
    printArray(a, n);
    int min;
    for (i = 0; i < n; i++){
        min = i;
        for (j = i; j < n; j++){
            if (a[j] < a[min])
                min = j;
        }
        if (min != i){
            temp=a[i];
            a[i] = a[min];
            a[min] = temp;
            count++;
        }
        printf("after %d sorting: ", count);
        printArray(a, n);
    }
}
int main(){
    int *a, n=5;
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &*(a + i));
    }
    sort(a, n);
    free(a);
    return 0;
}