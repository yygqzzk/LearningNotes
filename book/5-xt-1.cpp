#include<stdio.h> 
int f(int x);
int main(void){
    int x,y;
    printf("Enter x:\n");
    scanf("%d",&x);
    y=f(x);
    printf("%d",y);

    return 0;
}
int f(int x){
    if (x>0)
    {
        return 1;
    }else if(x==0){
        return 0;
    }else
    {
        return -1;
    }
}