#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10][10],n,sum=0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=n-1 && j!=n-1 && i!=n-1-j){
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}
