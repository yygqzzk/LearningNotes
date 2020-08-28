#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10][10]={0},n,mindex,index,i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    mindex=index=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>a[i][index]){
                index=j;
            }
            if(a[j][i]<a[mindex][i]){
                mindex=j;
            }
        }
        if(a[mindex][i]==a[mindex][index]){
            printf("%d",a[mindex][index]);
            break;
        }
        index=mindex=0;
    }

    return 0;
}
