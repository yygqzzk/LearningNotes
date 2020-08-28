#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10][10],n,m;
    scanf("%d %d",&m,&n);

    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i!=0 && j!=0 && i!=m-1 && j!=n-1){
                if(a[i][j]>a[i-1][j] &&a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1]){
                    printf("%d %d %d \n",a[i][j],i+1,j+1);
                }
            }
        }
    }

    return 0;
}
