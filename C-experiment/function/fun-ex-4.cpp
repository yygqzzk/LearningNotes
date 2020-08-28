#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
double mypow(double x,int n);
int main(void){
    int n;
    double x;
    scanf("%lf%d",&x,&n);
    printf("%lf",mypow(x,n));

    return 0;
}
double mypow(double x,int n){
    while (1)
    {
        if(n==1){
            return x;
        }else
        {
            x=mypow(x,n-1)*x;
            return x;
        }
        
    }
    


}