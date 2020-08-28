#include<stdio.h> 
int main(void){
    double speed,limit;
    printf("Enter your speed:\n");
    scanf("%lf",&speed);
    printf("Enter limit:\n");
    scanf("%lf",&limit);
    if(speed>1.5*limit){
        printf("withdrawal of the driving license!");
    }else if(speed>1.1*limit){
        printf("punishment 200!");
    }
    return 0;
}