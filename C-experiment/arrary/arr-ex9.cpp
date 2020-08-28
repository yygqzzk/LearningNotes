#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,j,n,a[10],count=1,max=0,index;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for(i=0;i<n-1;i++){
        for(j=1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            index=i;
        }
        count=0;
    }
    
    printf("%d %d",a[index],max);

    return 0;
}
