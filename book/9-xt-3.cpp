#include<stdio.h> 
struct V{
    int x,y;
}v1,v2;
int main(void){
    scanf("%d%d%d%d",&v1.x,&v1.y,&v2.x,&v2.y)  ;
    printf("V1+V2=(%d,%d)",v1.x+v2.x,v2.x+v2.y);

    return 0;
}