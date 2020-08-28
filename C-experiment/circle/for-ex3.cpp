#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int n;
    double amount;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            amount+=-1.0/(i*3-2);
        }else
        {
            amount+=1.0/(i*3-2);
        }
    }
    printf("%.3lf",amount);

    return 0;
}