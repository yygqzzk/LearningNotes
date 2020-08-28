#include<stdio.h> 
int reverse(int num);
int main(void){
    int n;
    printf("Enter num :\n");
    scanf("%d",&n);
    printf("%d",reverse(n));

    return 0;
}
int reverse(int num){
    int renum=0;
    while (num/10!=0)
    {
        renum+=num%10;
        num/=10;
        renum*=10;
    }
    renum+=num%10;
    return renum;
}