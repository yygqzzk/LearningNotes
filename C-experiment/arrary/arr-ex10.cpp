#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j, a[10], n, min, index;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", a + i);
    }

    for (i = 0; i < 9; i++)
    {
        index = i;
        for (j = i+1; j < 10; j++)
        {
            if (i == 0)
            {
                if (a[j] <= a[index] && a[j]!=0)
                {
                    index = j;
                }
            }
            else
            {
                if (a[j] < a[index])
                {
                    index = j;
                }
            }
        }
        a[i] ^= a[index] ^= a[i] ^= a[index];
    }

    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }

    return 0;
}
