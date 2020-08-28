#include<stdio.h> 
int main(void){
    int m,n,gcd,lcm,i;
    printf("Enter m & n (m,n<=1000):\n");
    scanf("%d%d",&m,&n);
    for(i=m;i>=1;i--){
        if( m%i==0 && n%i==0){
            gcd = i;
            break;
        }
    }
    lcm = (m*n)/gcd;
    printf("gcd=%d,lcm=%d",gcd,lcm);

    return 0;
}