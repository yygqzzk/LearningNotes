#include<stdio.h> 
#include<math.h>
double calc(double (*fun) (double),double a,double b);
double f1(double x),f2(double x);
int main(void){
    double result;
    double (*fun) (double);
    result = calc(f1,0.0,1.0);
    printf("∫x^2dx[0,1]=%.4lf\n",result);
    result = calc(f2,1.0,2.0);
    printf("∫sinx/xdx[1,2]=%.4lf\n",result);
    return 0;
}
double f1(double x){
    x=pow(x,2);
    return x;
};
double f2(double x){
    return (sin(x)/x);
};
double calc(double (*fun) (double),double a,double b){
    double z;
    z=(b-a)/2 * ((*fun)(a)+(*fun)(b));
    return z;
}