#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j, n, m, a1[12], a2[12], a3[12], flag, count = 0;

    scanf("%d", &n);
    printf("a1:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a1 + i);
    }
    scanf("%d", &m);
    printf("a2:");
    for (i = 0; i < m; i++)
    {
        scanf("%d", a2 + i);
    }
    a1[n] = '\0';
    a2[m] = '\0';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a1[i] == a2[j])
            {
                flag = 1;
            }
        }
        if (flag != 1)
        {
            a3[count] = a1[i];
            count++;
        }
        flag = 0;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a2[i] == a1[j])
            {
                flag = 1;
            }
        }
        if (flag != 1)
        {
            a3[count] = a2[i];
            count++;
        }
        flag = 0;
    }

    a3[count] = '\0';

    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (a3[i] == a3[j])
            {
                a3[j] = '\0';
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        if (a3[i] != '\0')
        {
            printf("%d ", a3[i]);
        }
    }

    return 0;
}