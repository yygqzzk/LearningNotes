#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j, n, a[10], max;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for (i = 0; i < n - 1; i++)
    {
        max = a[i];
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                a[i] ^= a[j] ^= a[i] ^= a[j];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}