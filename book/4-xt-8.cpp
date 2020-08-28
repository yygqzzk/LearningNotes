#include <stdio.h>

int main(void)
{
    int height, n;
    double total,h;
    scanf("%d%d",&height,&n);
    total=height;
    h=height/2;
    for(int i=1;i<=n;i++){
        if(i>1){
            total+=(h*2);
            h=h/2;
        }
    }
    printf("total=%.1f,h=%.1f",total,h);
    return 0;
}