#include <stdio.h>
#include <math.h>
#define size 4
int main(void)
{
    int i,n,a[10];

    scanf("%d", &n);
    for (i = size-1; i >= 0; i--)
    {
        a[i]=n%10;
        n/=10;
    }

    for(i=0;i<size;i++){
        a[i]=(a[i]+9)%10;
    }
    a[0]^=a[2]^=a[0]^=a[2];
    a[1]^=a[3]^=a[1]^=a[3];
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }

    return 0;
}
