#include<stdio.h>
#include<stdlib.h>
void printArray(int *a,int n){
    printf("after sorting: ");
    for (int i = 0; i < n; i++){
        printf("%4d", *(a + i));
    }
    printf("\n");
}
void quicksort(int a[],int left,int right){
    int temp;
    int min = left;
    int max = right;
    int mid = a[(left + right) / 2];
    do{
        while (a[min] < mid && min < right)
            min++;
        while (a[max] > mid && max > left)
            max--;
        if (min <= max){
            temp = a[min];
            a[min] = a[max];
            a[max] = temp;
            min++;
            max--;
        }
    } while (min <= max);
    if (left < max)
        quicksort(a, left, max);
    if (right > min)
        quicksort(a, min, right);
}
int main(){
    int *a, n;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &*(a + i));
    }
    quicksort(a, 0, n);
    printArray(a, n);
    free(a);
    return 0;
}