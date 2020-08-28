#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h>
int main(void){
    int n,h;
    float d,rh;
    scanf("%d%d",&h,&n);
    d=h;
    for(int i=0;i<n;i++){
        rh=h/pow(2,i)/2;
        d+=h/pow(2,i);
    }
    printf("%.4f\n",d);
    printf("%.4f",rh);

    return 0;
}