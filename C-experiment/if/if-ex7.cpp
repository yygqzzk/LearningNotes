#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int d;
    scanf("%d",&d);
    if(d%5<=3){
        printf("Finshing in day %d",d);
    }else
    {
        printf("Drying in day %d",d);
    }
    return 0;
}