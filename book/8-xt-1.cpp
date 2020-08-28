#include<stdio.h> 
#include<math.h>
void splitfloat(float x,int *intpart,float *fracpart);
int main(void){
    float x,fracpart;
    int intpart;
    printf("Enter a float num:");
    scanf("%f",&x);
    splitfloat(x,&intpart,&fracpart);
    printf("intpart=%d,fracpart=%f",intpart,fracpart);

    return 0;
}
void splitfloat(float x,int *intpart,float *fracpart){
    *intpart=floor(x);
    *fracpart=x-*intpart;
}