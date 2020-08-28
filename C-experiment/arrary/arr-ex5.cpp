#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n, a[10], num[10]={0}, x, index;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for (i = 0; i < n; i++)
    {
        x = a[i];
        while (x / 10 != 0)
        {
            num[x % 10]++;
            x /= 10;
        }
        if (x < 10)
        {
            num[x]++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (num[i] > num[index])
        {
            index = i;
        }
    }
    printf("%d : ", num[index]);
    for (i = 0; i < 10; i++)
    {
        if (num[index] == num[i])
        {
            printf("%d ", i);
        }
    }

    return 0;
}