#include<stdio.h> 
int main(void){
    int a,n,item,total=0,i;
    printf("Enter a & n :\n");
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++){
        item=a+item*10;
        total+=item;
    }
    printf("total=%d",total);
    return 0;
}