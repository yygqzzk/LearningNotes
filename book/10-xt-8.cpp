#include<stdio.h> 
void print(int n);
int main(void){
    int n;
    scanf("%d",&n);
    print(n);

    return 0;
}
void print(int n){
    if(n/10==0){
        printf("%d ",n);
    }else
    {
        print(n/10);
        printf("%d ",n%10);
    }
}