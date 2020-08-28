#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10][10],n,flag=0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i && a[i][j]!=0){
                flag=1;
            }
        }
    }
    if(flag){
        printf("No!");
    }else
    {
        printf("Yes!");
    }
    

    return 0;
}
