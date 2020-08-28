#include<stdio.h> 
struct student {
    int num;
    char name[10];
    int computer,english,math;
    double average,C_a,E_a,M_a;
};
int main(void){
    int n,math=0,english=0,computer=0;
    struct student s1,max;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input message\n");
    for(int i=1;i<=n;i++){
        printf("No.%d:",i);
        scanf("%d%s%d%d%d",&s1.num,&s1.name,&s1.math,&s1.english,&s1.computer);
        math+=s1.math;
        english+=s1.english;
        computer+=s1.computer;
        s1.average=(s1.math+s1.english+s1.computer)/3.0;
        if(i==1) max=s1;
        if(max.average<s1.average)
            max=s1;
    };
    max.C_a=computer/(float)n;
    max.E_a=english/(float)n;
    max.M_a=math/(float)n;
    printf("num:%d,name:%s,average:%.2lf,math_a:%.2lf,english_a:%.2lf,computer_a:%.2lf",max.num,max.name,max.average,max.M_a,max.E_a,max.C_a);

    return 0;
}