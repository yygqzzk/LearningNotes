#include<stdio.h> 
#include<math.h>
int f(int x,int n);
int main(void){
    int x,n;
    scanf("%d%d",&x,&n);
    printf("f(%d,%d)=%d",x,n,f(x,n));

    return 0;
}
int f(int x,int n){
    if(n==1){
        return x;
    }else
    {
        return f(x,n-1)+pow(-1,n-1)*pow(x,n);
    }
    

}