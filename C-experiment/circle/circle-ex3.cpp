#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int count=0,sum=0,n;
    scanf("%d",&n);
    while (n/10!=0)
    {
        sum+=n%10;
        count++;
        n/=10;
    }
    sum+=n;
    count++;
    printf("%d %d",count,sum);
    


    return 0;
}