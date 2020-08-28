#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int num,sum;
    do
    {
        scanf("%d",&num);
        if(num%2!=0){
            sum+=num;
        }
    } while (num>0);
    printf("%d",sum);
    return 0;
}