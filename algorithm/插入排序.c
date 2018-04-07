#include<stdio.h>
#include<stdlib.h>
void printArray(int *a,int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%4d", *(a + i));
    }
    printf("\n");
}
void insertsort(int a[],int n){
    int i, j, temp;
    int count = 0;
    printf("initial sorting: ");
    printArray(a, n);
    for (i = 1; i < n; i++){
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp;j--)
            a[j + 1] = a[j];
        a[j+1] = temp;
        count++;
        printf("after %d sorting: ", count);
        printArray(a, i + 1);
    }
}
int main(){
    int *a, n = 5;
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &*(a + i));
    }
    insertsort(a, n);
    free(a);
    return 0;
}