#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int multiply(int a,int n);
int main(void){
    int a,n,sum=0;
    scanf("%d%d",&a,&n);

    for(int i=1;i<=n;i++){
        sum+=multiply(a,i);
    }
    printf("%ld",sum);

    return 0;
}
int multiply(int a,int n){
    int num;
    if(n==1){
        return a;
    }else
    {
        a=multiply(a,n-1)*10+a;
        return a;
    }
}