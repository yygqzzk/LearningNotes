#include<stdio.h> 
#include<string.h>
int main(void){
    char str[80],*p;
    int upper=0,lower=0,space=0,num=0,another=0;
    gets(str);
    for(p=str;*p!='\0';p++){
        if(*p>='a'&&*p<='z'){
            lower++;
        }else if(*p>='A'&&*p<='Z'){
            upper++;
        }else if(*p>='0'&&*p<='9'){
            num++;
        }else if(*p == ' '){
            space++;
        }else
        {
            another++;
        }
    }


    return 0;
}