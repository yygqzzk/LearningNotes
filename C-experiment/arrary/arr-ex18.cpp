#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10][10]={0},n,count=1;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        a[0][j]=count;
        count++;
    }
    for(int j=1;j<n;j++){
        a[j][n-1]=count;
        count++;
    }
    for(int j=n-2;j>=0;j--){
        a[n-1][j]=count;
        count++;
    }
    for(int j=n-2;j>=1;j--){
        a[j][0]=count;
        count++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
