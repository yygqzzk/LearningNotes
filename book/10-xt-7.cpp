#include<stdio.h> 
#include<string.h>
void dec(int n);
int main(void){
    int n;
    scanf("%d",&n);
    dec(n);

    return 0;
}
void dec(int n){
    if(n==1){
        printf("1");
    }else
    {
        dec(n/2);
        printf("%d",n%2);
    }
}