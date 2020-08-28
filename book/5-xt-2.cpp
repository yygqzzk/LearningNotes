#include<stdio.h> 
int sign(int n);
int main(void){
    int n,sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    while (n>0)
    {
        if(sign(n)==0){
            printf("%d is odd\n",n);
            sum+=n;
        }else
        {
            printf("%d is even\n",n);
        }
        
        printf("Enter n:\n");
        scanf("%d",&n);
    }
    printf("sum=%d",sum);
    return 0;
}
int sign(int n){
    if (n%2==0)
    {
        return 1;
    }else
    {
        return 0;
    }
}