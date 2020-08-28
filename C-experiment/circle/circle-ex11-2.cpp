#include <stdio.h>
#include <stdlib.h>
int diagnose(int i);
int main(void)
{
    int n, i, j, flag;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        j = n - i;
        if (diagnose(i) && diagnose(j))
        {
            printf("%d + %d = %d\n", i, j, n);
        }
        if(j<i){
            break;
        }
    }

    return 0;
}
int diagnose(int i) //用于判断素数
{
    int m;
    for (m = 2; m < i; m++)
    {
        if (i % m == 0)
        {
            return false;
        }
    }
    if (m >= i && m != 2)
    {
        return true;
    }
    return false;
}