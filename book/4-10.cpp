#include<stdio.h> 
int main(void){
    int n,min,i,num;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(n>0){
        min=n;
        for(i=1;i<=n;i++){
            printf("Enter #%d num:\n",i);
            scanf("%d",&num);
            if(min>num){
                min = num;
            }
        }
        printf("min:%d",min);
    }
    return 0;
}