#include<stdio.h> 
#include<math.h>
int main(void){
    int n,i,min,max,j=0,total,item=0,k=0,p=0;
    printf("Enter n[3,7] :\n");
    scanf("%d",&n);
    min = pow(10,n-1);
    max = pow(10,n);
    for(i=min;i<max;i++){
        k=i;
        total = 0;
        for(j=n;j>=1;j--){
            p = pow(10,j-1);
            item=k/p;
            total+=pow(item,n);
            if(total == i){
                printf("%d\n",total);
            }
            k%=p;
        }
    }
    return 0;
}