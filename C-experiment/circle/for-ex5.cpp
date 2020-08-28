#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int n,m;
    double amount=0;
    scanf("%d%d",&m,&n);
    for(int i=0;i<=n-m;i++){
        amount+=(m+i)*(m+i)+1.0/(m+i);
    }
    printf("%.6lf",amount);

    return 0;
}