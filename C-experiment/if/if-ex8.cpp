#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    double percent,speed,standard;
    scanf("%lf%lf",&speed,&standard);
    percent=(speed-standard)/standard*100;
    if(percent>=10){
        if (percent <= 50)
        {
            printf("Exceed %.0lf%% .Ticket 200",percent);
        }
        else
        {
            printf("Exceed %.0lf%% .License Revoked",percent);
        }
    }else
    {
        printf("OK");
    }
    
    return 0;
}