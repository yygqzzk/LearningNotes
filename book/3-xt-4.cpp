#include<stdio.h> 
int main(void){
    int n,i,A,B,C,D,E;
    double grade;
    printf("Enter n :\n");
    scanf("%d",&n);
    A=B=C=D=E=0;
    for(i=1;i<=n;i++){
        printf("Enter #%d grade:\n",i);
        scanf("%lf",&grade);
        if(grade>=90){
            A++;
        }else if(grade>=80){
            B++;
        }else if(grade>=70){
            C++;
        }else if(grade>=60){
            D++;
        }else{
            E++;
        }
    }
    printf("A:%d,B:%d,C:%d,D:%d,E:%d",A,B,C,D,E);

    return 0;
}