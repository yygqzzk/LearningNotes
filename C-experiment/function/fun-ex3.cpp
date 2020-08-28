#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
double fact(int n);
int main(void){
    int n,e;

    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        e+=fact(i);
    }
    printf("%d",e);

    return 0;
}
double fact(int n){
    while (1)
    {
        if(n==1){
            return 1;
        }else
        {
            n=fact(n-1)*n;
            return n;
        }
    }
}