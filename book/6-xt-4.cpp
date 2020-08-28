#include<stdio.h> 
int fib(int n);
int main(void){
    int m,n;
    printf("Enter m & n (1<=m,n<=10000) :\n");
    scanf("%d%d",&m,&n);
    for(int i=1;i<=n;i++){
        if(fib(i)>=m && fib(i) <=n){
            printf("%d\n",fib(i));
        }
    }

    return 0;
}
int fib(int n){
    int x1=1,x2=1,result;
    if(n == 1 || n == 2){
        return 1;
    }
    for(int i=3;i<=n;i++){
        result = x1+x2;
        x1 = x2;
        x2 = result;
    }
    return result;
}