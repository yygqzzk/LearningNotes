#include<stdio.h> 
int main(void){
    double km,total;
    int min;
    printf("Enter your distance:\n");
    scanf("%lf",&km);
    printf("Enter waiting time:\n");
    scanf("%d",&min);
    if(km<3){
        total=10;
    }else if(km<13){
        total=10+(km-3)*2;
    }else{
        total=10+10*2+(km-13)*3;
    }
    if(min>=5){
        if (min%5>0)
        {
            total+=2*(min/5)+2;
        }else
        {
            total+=(min/5)*2;
        }
    }
    printf("price:%.0f",total);

    return 0;
}