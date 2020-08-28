#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int salary;
    scanf("%d",&salary);
    if(salary<=1600){
        printf("0\n");
    }else if(salary<=2500){
        printf("%.2lf\n",(salary-1600)*0.05);
    }else if(salary<=3500){
        printf("%.2lf\n",(salary-1600)*0.1);
    }else if(salary<=4500){
        printf("%.2lf\n",(salary-1600)*0.15);
    }else{
        printf("%.2lf\n",(salary-1600)*0.2);
    }


    return 0;
}