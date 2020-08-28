#include<stdio.h> 
int main(void){
    int i=0,count=0;
    char str[80];
    while ((str[i]=getchar())!='\n')
    {
        i++;
    }
    str[i]='\0';
    for(int j=0;str[j]!='\0';j++){
        if(str[j]!='A'&&str[j]!='E'&&str[j]!='U'&&str[j]!='O'&&str[j]!='I'){
            putchar(str[j]);
            count++;
        }
    }
    printf("count=%d",count);
    
    return 0;
}