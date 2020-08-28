#include<stdio.h> 
int day_of_year(int year,int month,int day);
int main(void){
    int y,m,d,amount;
    scanf("%d%d%d",&y,&m,&d);
    amount=day_of_year(y,m,d);
    printf("amount=%d",amount);
    



    return 0;
}
int day_of_year(int year,int month,int day){
    int k,leap;
    int tab[2][13] = {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31},
    };
    leap=(year%4==0 && year%100!=0 || year%400==0);

    for(k=1;k<month;k++){
        day+=tab[leap][k];
    }

    return day;
}
