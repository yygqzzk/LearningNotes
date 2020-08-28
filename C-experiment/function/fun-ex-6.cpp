#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
double fact(int n);
int main(void){
    int n,m;
    double result;
    scanf("%d%d",&m,&n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("%lf",result);
    return 0;
}
double fact(int n){
    while (1)
    {
        if(n==1){
            return 1;
        }else
        {
            return n*fact(n-1);
        }
    }
}