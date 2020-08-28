#include<stdio.h> 
struct student{
    char num[80];
    char name[80];
    float grade;
    char level;
};
char set_grade(float grade);
int main(void){
    struct student students[10];
    int count;
    for(int i=0;i<3;i++){
        printf("Input No.%d student:\n",i+1);
        printf("Num :");
        scanf("%s",&students[i].num);
        printf("Name :");
        scanf("%s",&students[i].name);
        printf("Grade :");
        scanf("%f",&students[i].grade);
        students[i].level=set_grade(students[i].grade);
        if (students[i].grade<60)
            count++;
    }
    printf("count = %d",count);

    return 0;
}
char set_grade(float grade){
    if(grade>=85){
        return 'A';
    }else if(grade>=70){
        return 'B';
    }else if(grade>=60){
        return 'C';
    }else
    {
        return 'D';
    }
}