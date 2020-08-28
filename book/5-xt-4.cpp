#include<stdio.h> 
#include<math.h>
int prime(int i);
int main(void){
    int m,n,total=0,count=0;
    printf("Enter m & n (1<=m,n<=500):\n");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        if(prime(i)){
            printf("%d\n",i);
            total+=i;
            count++;
        }
    }
    printf("total=%d,count=%d",total,count);

    return 0;
}
int prime(int i){
    int n;
    if(i == 1){
        return 0;
    }
    n = sqrt(i);
    for(int j=2;j<=n;j++){
        if(i%j==0){
            return 0;
        }
    }
    return 1;
}