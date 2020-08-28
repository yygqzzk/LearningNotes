#include<stdio.h> 
#include<math.h>
int main(void){
    double x1,y1,x2,y2,x3,y3,area,a,b,c,s,perimeter;
    printf("Enter #1 (x1,y1):\n");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter #2 (x2,y2):\n");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter #3 (x3,y3):\n");
    scanf("%lf%lf",&x3,&y3);
    a=sqrt(pow(fabs(x1-x2),2)+pow(fabs(y1-y2),2));
    b=sqrt(pow(fabs(x2-x3),2)+pow(fabs(y2-y3),2));
    c=sqrt(pow(fabs(x3-x1),2)+pow(fabs(y3-y1),2));
    if(a+b>c && a+c>b && b+c>a){
        s=(a+b+c)/2;
        perimeter = a+b+c;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%.2f,perimeter=%.2f",area,perimeter);
    }else
    {
        printf("Impossible!");
    }
    return 0;
}