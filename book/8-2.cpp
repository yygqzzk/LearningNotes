#include<stdio.h> 
float sum_diff(float op1,float op2,float *psum,float *pdiff);
int main(void){
    float op1,op2,sum,diff;
    printf("Enter two num:");
    scanf("%f%f",&op1,&op2);
    sum_diff(op1,op2,&sum,&diff);
    printf("sum=%.2f,diff=%.2f",sum,diff);

    return 0;
}
float sum_diff(float op1,float op2,float *psum,float *pdiff){
    *psum = op1+op2;
    *pdiff = op1-op2;
}