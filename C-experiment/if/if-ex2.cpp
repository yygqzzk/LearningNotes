#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        if(x>z){
            if(z>y){
                printf("%d->%d->%d",y,z,x);
            }else
            {
                printf("%d->%d->%d",z,y,x);
            }
        }else
        {
            printf("%d->%d->%d",y,x,z);
        }
    }else
    {
        if(x>z){
            printf("%d->%d->%d",z,x,y);
        }else
        {
            if(y>z){
                printf("%d->%d->%d",x,z,y);
            }else
            {
                printf("%d->%d->%d",x,y,z);
            }
        }
    }
    return 0;
}