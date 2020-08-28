#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j, a[10],n,b[20]={0};
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[j]+a[i]<=100){
                printf("%d %d\n",a[i],j+1);
                b[j]+=a[i];
                break;
            }
        }
    }
    for(i=0;b[i]!=0;i++){

    }
    printf("%d",i);

    return 0;
}
