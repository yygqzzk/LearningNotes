#include<stdio.h> 
int main(void){
    int x,y,z,min,max,mid;

    scanf("%d%d%d",&x,&y,&z);
    if (x<y)
    {
        if (x<z)
        {
            min=x;
            if(z>y){
                max = z;
                mid = y;
            }
            else
            { 
                max = y;
                mid = z;
            }
        }
        else
        {
            min = z;
            max = y;
            mid = x;
        }
    }
    else
    {
        if (x>z)
        {
            max = x;
            if (z>y)
            {
                mid = z;
                min = y;
            }
            else
            {
                mid = y;
                min = z;
            }
        }
        else
        {
            min = y;
            max = z;
            mid = x;
        }
    }
    printf("max:%d,mid:%d,min:%d",max,mid,min);
    
    



    return 0;
}