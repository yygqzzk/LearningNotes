#include<stdio.h> 
#include<math.h>
int main(void){
    int m,n,i,total,j,g,count=0;
    printf("Enter m & n (1<=m<=n<500):\n");
    scanf("%d%d",&m,&n);
    if(m=1){
        m++;
    }
    for(i=m;i<=n;i++){
        g = sqrt(i);
        for(j=2;j<=g;j++){
            if(i%j==0){
                break;
            };
        }
        if(j>g){
            printf("%d ",i);
            total+=i;
            count++;
        }
    }
    printf("count:%d,total:%d",count,total);
    return 0;
}