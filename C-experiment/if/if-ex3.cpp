#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    char ch;
    int letter,blank,digit,other;
    letter=blank=digit=other=0;
    for(int i=0;i<15;i++){
        ch=getchar();
        if(ch==' ' || ch=='\n'){
            blank++;
        }else if(ch>='0' && ch<='9'){
            digit++;
        }else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
            letter++;
        }else
        {
            other++;
        }
    }
    printf("letter=%d",letter);
    printf("blank=%d",blank);
    printf("digit=%d",digit);
    printf("other=%d",other);


    return 0;
}