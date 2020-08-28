#include <stdio.h>
int main(void)
{
    int n, arr[1000], criterion[10], num[10], one, max, index = 0;
    scanf("%d", &n);
    printf("Enter num:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        criterion[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        while (arr[i] / 10 != 0)
        {
            one = arr[i] % 10;
            for (int j = 0; j < 10; j++)
            {
                if (one == j)
                {
                    criterion[j]++;
                }
            }
            arr[i] /= 10;
        }
        if (arr[i] < 10)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i] == j)
                {
                    criterion[j]++;
                }
            }
        }
    }
    max = criterion[index];
    for (int i = 0; i < 10; i++)
    {
        if (criterion[i] > max)
        {
            index = i;
            max = criterion[index];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (criterion[i] == max)
        {
            printf("%d ", i);
        }
    }

    return 0;
}