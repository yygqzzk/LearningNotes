#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
#include<math.h> 
int main(void){
    double a,b,c;
    double area,perimeter,s;
    scanf("%lf%lf%lf",&a,&b,&c);

    if((a+b>c && b+c>a && a+c>b)){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        perimeter=a+b+c;
        printf("area=%.2lf;perimeter=%.2lf;\n",area,perimeter);
    }else
    {
        printf("NO");
    }
    



    return 0;
}