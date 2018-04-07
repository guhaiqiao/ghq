#include <stdio.h>
#include <stdlib.h>
void print(int *a,int n){
    for (int i = 0; i < n; i++){
        printf("%4d", *(a + i));
    }
    printf("\n");
}
void Bubblesort(int a[],int n){
    int i, j, temp;
    int flag;
    int count = 0;
    printf("initial sorting: ");
    print(a, n);
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
        count++;
            if (a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        printf("after %d sorting: ", count);
        print(a, n);
        if (flag == 0){
            return;
        }
    }
}
int main(){
    int *a, n = 10, i;
    a = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    Bubblesort(a, n);
    free(a);
    return 0;
}