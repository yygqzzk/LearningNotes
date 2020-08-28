#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int n,min,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(i==0){
            min==num;
        }else if(num<min){
            min=num;
        }
    }
    printf("%d",min);


    return 0;
}