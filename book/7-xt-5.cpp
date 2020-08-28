#include <stdio.h>
int main(void)
{
    int n, a[6][6], flag, max, index = 0, cd = 0, i, j, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        flag = 0;
        max = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                index = j;
            }
        }
        for (k = 0; k < n; k++)
        {
            if (max > a[k][index])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cd = 1;
            break;
        }
    }
    if (cd)
    {
        printf("row=%d,col=%d", i, index);
    }
    else
    {
        printf("No!");
    }
    return 0;
}