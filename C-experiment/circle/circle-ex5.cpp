#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int n;
    double x,y,sum,tmp;
    scanf("%d",&n);
    x=2.0;
    y=1.0;
    for(int i=1;i<=n;i++){
        sum+=x/y;
        tmp=x;
        x=x+y;
        y=tmp;
    }
    printf("%.2lf",sum);


    return 0;
}