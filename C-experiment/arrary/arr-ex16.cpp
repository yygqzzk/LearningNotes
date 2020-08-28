#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[10][10]={0},n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0 && j==0){
                a[i][j]=1;
            }else if(j==i){
                a[i][j]=1;
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
                printf(" ");
            }
        for(int j=0;j<=i;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
