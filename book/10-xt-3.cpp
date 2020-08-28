#include<stdio.h> 
int f(int x,int n);
int main(void){
    int x,n;
    scanf("%d%d",&x,&n);
    printf("%d^%d=%d",x,n,f(x,n));

    return 0;
}
int f(int x,int n){
    if(n==1){
        return x;
    }else
    {
        return x*f(x,n-1);
    }
}