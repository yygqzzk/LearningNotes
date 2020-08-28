#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,n,a[10],*max,*min;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    max=min=a;
    for(i=0;i<n;i++){
        if(a[i]>*max){
            max=&a[i];
        }
        if(a[i]<*min){
            min=&a[i];
        }
    }

    a[n-1]^=(*max)^=a[n-1]^=(*max);
    a[0]^=(*min)^=a[0]^=(*min);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
