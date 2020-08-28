#include<stdio.h> 
int main(void){
    int n,i,j;
    double e,item,total;
    printf("Enter n :\n");
    scanf("%d",&n);
    total=1;
    for(i=1;i<=n;i++){
        item=1;
        for(j=1;j<=i;j++){
            item*=j;
        }
        total+=1/item;
    }
    printf("total=%lf",total);


    return 0;
}