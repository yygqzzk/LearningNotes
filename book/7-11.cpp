#include<stdio.h> 
int main(void){
    int i=0,j=0;
    char str[80],tmp;
    printf("Enter str:");
    while ((str[i]=getchar())!='\n')
    {
        i++;
    }
    str[i]='\0';

    while (j<i-1)
    {
        // tmp=str[i-1];
        // str[i-1] = str[j];
        // str[j]=tmp;

        str[i-1]^=str[j]^=str[i-1]^=str[j];     //通过位运算使 值 互换


        j++;
        i--;
    }
    for(int i=0;str[i]!='\0';i++){
        putchar(str[i]);
    }
    



    return 0;
}