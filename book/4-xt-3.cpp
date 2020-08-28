#include<stdio.h> 
int main(void){
    int n,i;
    double total,item,x1=2.0,x2=1.0,x;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        item=x1/x2;
        total+=item;
        x=x1;
        x1=x1+x2;
        x2=x;
    }
    printf("total=%lf",total);
    return 0;
}