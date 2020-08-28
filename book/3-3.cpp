#include<stdio.h> 
int main(void){
    int n,count=0,i;
    double grade,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter #%d grade:\n",i);
        scanf("%lf",&grade);
        total+=grade;
        if(grade>60){
            count++;
        }
    }
    printf("total:%.2lf,avg:%.2lf,count:%d",total,total/n,count);


    return 0;
}