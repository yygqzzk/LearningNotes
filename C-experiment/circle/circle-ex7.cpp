#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int n,r1,r2,r3,amout=0,count=1,tmp=0;
    scanf("%d",&n);
    r1=1;
    r2=r3=0;
    while (amout<n)
    {
        tmp=r1;
        r3+=r2;
        r1=r3;
        r2=tmp;
        amout=r1+r2+r3;
        count++;
    }
    printf("%d",count);

    return 0;
}