#include<stdio.h> 
int main(void){
    int x,y;
    scanf("%d",&x);
    if(x<0){
        y=-1;
    }else if(x==0){
        y=0;
    }else
    {
        y=1;
    }
    printf("sing(%d)=%d",x,y);
    


    return 0;
}