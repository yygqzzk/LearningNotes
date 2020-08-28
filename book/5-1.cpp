#include<stdio.h> 
int sum(int m , int n);
int main(void){
    int m,n,total;
    printf("Enter m & n:\n");
    scanf("%d%d",&m,&n);
    total=sum(m,n);
    printf("total=%d",total);

    return 0;
}
int sum(int m,int n){
    int total=0;
    for(int i=m;i<=n;i++){
        total+=i;
    }
    return total;
}