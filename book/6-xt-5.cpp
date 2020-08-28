#include <stdio.h>
#include <math.h>
int prime(int n);
int main(void)
{
    int count = 0;
    for (int i = 6; i <= 100; i += 2)
    {
        for(int j=3;j<=i;j+=2){
            if(prime(j)&&prime(i-j)){
                printf("%d=%d+%d ",i,j,i-j);
                count++;
                if(count%5==0) printf("\n");
                break;
            }
        }
    }
    return 0;
}
int prime(int n)
{
    int i;
    if (n == 1)
    {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    if (i > sqrt(n))
    {
        return 1;
    }
}
