#include <stdio.h>
#include <math.h>
double fact(double x);
double funcos(double e,double x);
int main()
{
    double e,x;
    scanf("%lf%lf",&e,&x);
    printf("%lf",funcos(e,x));

    return 0;
}

double funcos(double e,double x){
    double item=1,sum=0,flag=1;
    for(int i=0;item>=e;i+=2){
        item=pow(x,i)/fact(i);
        sum+=item*flag;
        flag=-flag;
    }    
    return sum;
}
double fact(double x){
    if(x<=1){
        return 1;
    }else
    {
        return fact(x-1)*x;
    }
}
