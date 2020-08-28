#include<stdio.h> 
#include<string.h>
char *match(char *s,char ch1,char ch2);
int main(void){
    char str[80],ch1,ch2,*p;
    
    scanf("%s\n",str);
    scanf("%c%c",&ch1,&ch2);
    p=match(str,ch1,ch2);
    printf("%s",p);


    return 0;
}
char *match(char *s,char ch1,char ch2){
    char *p,*q;
    p=s;
    while (*p!='\0'&&*p!=ch1)
    {
        p++;
    }
    q=p;
    while (*q!='\0'&& *q!=ch2)
    {
        printf("%c",*q);
        q++;
    }
    printf("%c",*q);
    printf("\n");

    return p;
}
