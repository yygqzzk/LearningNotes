#include"student.h"
#include"input_output.cpp"
#include"aver_sort.cpp"
#include"modify.cpp"
int Count=0;
int main(void){
    struct student students [MaxSize];
    new_student(students);
    output_student(students);
    average(students);
    sort(students);
    output_student(students);
    modify(students);
    average(students);
    sort(students);
    output_student(students);

    return 0;
}