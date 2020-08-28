#include<stdio.h> 
int main(void){
    int century,begin=200;
    printf("Enter century(%d<=century):\n",begin);
    scanf("%d",&century);
    for(begin;begin<=century;begin++){
        if((begin%4==0&&begin%100!=0)||begin%400==0){
            printf("%d\n",begin);
        }
    }



    return 0;
}