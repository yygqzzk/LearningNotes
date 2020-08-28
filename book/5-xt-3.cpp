#include<stdio.h> 
#include<math.h>
double distance(int x1,int y1,int x2,int y2);
int main(void){
    int x1,y1,x2,y2;
    double d;
    printf("Enter x1,y1:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter x2,y2:\n");
    scanf("%d%d",&x2,&y2);
    d = distance(x1,y1,x2,y2);
    printf("distance=%lf",d);

    return 0;
}
double distance(int x1,int y1,int x2,int y2){
    double d;
    d=sqrt(pow(fabs(x1-x2),2)+pow(fabs(y1-y2),2));
    return d;
}
