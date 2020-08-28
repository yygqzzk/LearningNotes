#include<stdio.h> 
#define PI 3.1415926
#define Min(a,b)   (a)<(b)?:(a):(b)
#define ISLOWER(c)  ((c)>'a'&&(c)<'z')
#define ISLEAP(y)   ((y)%4==0&&(y)%100!=0)||((y)%400==0)
#define CIRFER(r)   2*PI*(r)
#define max(x,y,z)  (x)>(y)?((x)>(z)?(x):(z)):((y)>(z)?(y):(z))
int main(void){
    printf("%d",max(2,3,1));



    return 0;
}