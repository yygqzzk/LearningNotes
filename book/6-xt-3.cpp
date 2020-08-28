#include<stdio.h> 
int factorsum(int num);
int main(void){
    int m,n;
    printf("Enter m & n (1<=m,n<=1000): \n");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        if(factorsum(i)==i){
            printf("%d\n",i);
        }
    }

    return 0;
}
int factorsum(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;

}