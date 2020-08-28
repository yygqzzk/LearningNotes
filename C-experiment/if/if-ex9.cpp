#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int a,b;
    char c;
    double discount=1,sum;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='m'){
        discount=1-0.05;
    }else if(c=='e'){
        discount=1-0.03;
    }
    switch (b)
    {
    case 90:
        sum=a*6.95*discount;
        break;
    case 97:
        sum=a*7.93*discount;
        break;
    case 93:
        sum=a*7.44*discount;
        break;
    default:
        break;
    }
    printf("%.2lf",sum);

    return 0;
}