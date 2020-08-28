#include<stdio.h> 
#include <string.h>
void delchar(char *str,char ch);
int main(void){
    char str[80],ch;
    printf("Enter a string:");
    gets(str);
    printf("Enter a char :");
    ch=getchar();
    delchar(str,ch);
    printf("%s",str);

    return 0;
}
void delchar(char *str,char ch){
    int i,j;
    i=j=0;
    while (str[i]!='\0')
    {
        if(str[i]!=ch){
           str[j]=str[i];
           j++;
        }
        i++;
    }
    str[j]='\0';
}