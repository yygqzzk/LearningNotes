#include<stdio.h> 
int fn(int a,int n);
int main(void){
    int total,a,n;
    printf("Enter a & n:\n");
    scanf("%d%d",&a,&n);
    for(int i=1;i<=n;i++){
        total+=fn(a,i);
    }
    printf("total=%d",total);

    return 0;
}
int fn(int a,int n){
    int item=0;
    for(int i=1;i<=n;i++){
        item= (item*10)+a;
    }
    return item;
}