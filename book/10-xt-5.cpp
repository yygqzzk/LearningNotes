#include<stdio.h> 
int ack(int m,int n);
int main(void){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",ack(m,n));

    return 0;
}
int ack(int m,int n){
    if(m==0){
        return n+1;
    }else{
        if(n==0){
            return ack(m-1,1);
        }else{
            return ack(m-1,n-1);
        }
    }

}