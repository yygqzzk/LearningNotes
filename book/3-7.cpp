#include<stdio.h> 
int main(void){
    float grade;
    printf("Enter your grade:\n");
    scanf("%f",&grade);
    if(grade>=90){
        printf("A\n");
    }
    else if(grade>=80){
        printf("B\n");
    }
    else if(grade>=70){
        printf("C\n");
    }
    else if(grade>=60){
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }
    


    return 0;
}