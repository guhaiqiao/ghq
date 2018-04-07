#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[1000];
int main()
{
    int len, i;
    char a[20], b[20];
    while (scanf("%s", a) && (strcmp(a, "ENDOFINPUT") != 0))
    {
        getchar();
        gets(str);
        getchar();
        scanf("%s", b);
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if (str[i] >= 70 && str[i] <= 90)
            {
                str[i] = str[i] - 5;
                continue; //一定要将continue放在if语句里面
            }
            if (str[i] <= 69 && str[i] >= 65)
                str[i] = str[i] + 21;
        }
        printf("%s\n", str);
    }
    //system("pause");
    return 0;
}