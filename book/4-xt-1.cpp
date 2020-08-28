#include<stdio.h> 
int main(void){
    int n=1,total;

    while(n>0){
        printf("Enter n:\n");
        scanf("%d",&n);
        if(n%2!=0){
            total+=n;
        }
    }
    printf("total=%d",total);



    return 0;
}