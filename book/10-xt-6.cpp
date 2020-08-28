#include<stdio.h> 
int Fab(int n);
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",Fab(n));

    return 0;
}
int Fab(int n){
    if(n<=1){
        return n;
    }else
    {
        return Fab(n-2)+Fab(n-1);
    }
}