#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int n;
    double amount;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        amount+=1.0/(i*2-1);
    }
    printf("%lf",amount);

    return 0;
}