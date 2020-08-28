#include<stdio.h> 
int main(void){
    int i=0;
    char str[80];
    while ((str[i]=getchar())!='\n')
    {
        i++;
    }
    str[i]='\0';
    for(int j=0;str[j]!='\0';j++){
        if(str[j]>='A' && str[j]<='Z'){
            str[j]='Z'-(str[j]-'A');
            putchar(str[j]);
        }
    }


    return 0;
}