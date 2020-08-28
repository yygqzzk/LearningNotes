#include<stdio.h> 
int fact(int n);
int main(void){
    int n;
    printf("Intput n:");
    scanf("%d",&n);
    printf("sum=%d",fact(n));

    return 0;
}
int fact(int n){
    int sum;
    if(n==1){
        sum=1;
    }else
    {
        sum=n+fact(n-1);
    }
    return sum;

}