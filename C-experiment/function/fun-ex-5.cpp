#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int pow(int n);
int main(void){
    int n,sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=pow(i);
    }
    printf("%d",sum);
    return 0;
}
int pow(int n){
    while (1)
    {
        if(n==1){
            return 2;
        }else
        {
            n =pow(n-1)*2;
            return n;
        }
    }
}