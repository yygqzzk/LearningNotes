#include<stdio.h> 
double f(int n);
int main(void){
    int n,total;
    printf("Input n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        total+=f(i);
    }
    printf("total=%d",total);

    return 0;
}
double f(int n){
    if(n==1){
        return 1;
    }else
    {
        return n*f(n-1);
    }
}