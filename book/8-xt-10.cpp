#include<stdio.h> 
#include<stdlib.h>
int main(void){
    int num,*grade;
    float average,low,high,amout;
    printf("Enter studen num:");
    scanf("%d",&num);
    grade=(int *)calloc(num,sizeof(int));
    high=-1;
    low=1000;
    for(int i=0;i<num;i++){
        scanf("%d",grade+i);
        if (*(grade+i)>high)
        {
            high=*(grade+i);
        }
        if(*(grade+i)<low){
            low=*(grade+i);
        }
        amout+=*(grade+i);
    }
    average=amout/num;
    printf("high=%.2f,low=%.2f,average=%.2f",high,low,average);

    return 0;
}