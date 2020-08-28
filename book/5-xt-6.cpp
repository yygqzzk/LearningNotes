#include<stdio.h> 
#include<math.h>
int is(int num);
int main(void){
    int m,n;
    printf("Enter m & n (1<=m,n<=1000):\n");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        if(is(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
int is(int num){
    int total=0,tmp;
    tmp = num;
    while (tmp>0)
    {
        total+=pow((tmp%10),3);
        tmp/=10;
    }
    if(total == num){
        return 1;
    }else
    {
        return 0;
    }
    
}