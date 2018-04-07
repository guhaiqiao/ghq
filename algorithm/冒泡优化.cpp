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
    int count = 0;
    int flag[n];
    for (int k = 0; k < n; k++){
    	flag[k] = 0;
	}
	int flag1 = 1;
    printf("initial sorting: ");
    print(a, n);
    for (i = 0; i < n - 1; i++)
    {
    	if (flag1 == 0)
            return;
        flag1 = 0;
        for (j = 0; j < n - i - 1 ; j++)
        {
        	if (flag[j] == 1)
			continue;
        	count++;
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag[j] = 1;
                if (j - 1 >= 0)
				{
                	flag[j-1] = 0;
				}
				flag1 = 1;
            }
            else flag[j] = 1;
            printf("after %2d sorting: ", count);
            print(a, n);
//            printf("                  ");
//            print(flag, n);
		}

    }
}
int main(){
    int *a, n = 10, i;
    a = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
//    int n = 10;
//    int a[10] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
    Bubblesort(a, n);
    free(a);
    return 0;
}
