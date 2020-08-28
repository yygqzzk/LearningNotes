#include<stdio.h> 
int main(void){
    double coin;
    int i,j,k,count=0;
    printf("Enter your coin (8,100):\n");
    scanf("%lf",&coin);
    for(i=1;i<=coin;i++){
        for(j=1;j<=coin;j++){
            for(k=1;k<=coin;k++){
                if(i*5+2*j+k == coin){
                    printf(" %2d %2d %2d \n",i,j,k);
                    count++;
                }
            }
        }
    }
    printf("count = %d",count);
    return 0;
}