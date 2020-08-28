#include<stdio.h> 
int main(void){
    int digit,letter,other;
    char ch;
    int i;
    digit=letter=other=0;
    printf("Enter 10 characters:\n");
    for(i=1;i<=10;i++){
        ch=getchar();
        if(( ch>='a'&&ch<='z' )|| ( ch<='Z'&&ch>='A' )){
            letter++;
        }else if(ch>='0'&&ch<='9'){
            digit++;
        }else
        {
            other++;
        }
    }
    printf("letter=%d,digit=%d,other=%d",letter,digit,other);



    return 0;
}