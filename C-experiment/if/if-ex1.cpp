#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int x;
    scanf("%d",&x);
    if(x==0){
        printf("0");
    }else if(x>0){
        printf("1");
    }else
    {
        printf("-1");
    }
    return 0;
}