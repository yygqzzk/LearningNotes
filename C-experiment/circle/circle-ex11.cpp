#include <stdio.h>
#include <stdlib.h>
int diagnose(int i);
int main(void)
{
    int n, i, j, flag;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (diagnose(i))
        {
            for (j = 2; j < n; j++)
            {
                if (diagnose(j))
                {
                    if (i + j == n && i >= j)
                    {
                        printf("%d + %d = %d\n", i, j, n);
                    }
                }
            }
        }
    }
    return 0;
}
int diagnose(int i)
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