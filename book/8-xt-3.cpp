#include<stdio.h> 
#include<stdlib.h>
int main(void){
    int n,m,*a;
    int k,tmp;
    printf("Enter n:");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    printf("Enter a[%d]:",n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("Enter m:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        k=/*a[n-1]*/*(a+n-1);
        for(int j=n-1;j>=1;j--){
            a[j]=a[j-1];
        }
        *a=k;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}