#include<stdio.h> 
#include<math.h>
#define s(a,b,c) ((a)+(b)+(c))/2
#define area(s,a,b,c) sqrt((s)*((s)-a)*((s)-b)*((s)-c));
int main(void){
    int s,area;
    s=s(3,4,5);
    area=area(s,3,4,5);
    printf("%d",area);
    return 0;
}