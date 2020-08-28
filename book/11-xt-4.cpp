#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
char *stract(char *s,char *t);
int main(void){
    char *s,*t;
    s=(char *)malloc(sizeof(char)*20);
    t=(char *)malloc(sizeof(char)*10);
    scanf("%s",s);
    scanf("%s",t);
    stract(s,t);
    printf("%s",s);


    return 0;
}
char *stract(char *s,char *t){
    char *p1,*p2;
    p1=s+strlen(s);
    p2=t;

    while (*p2!='\0')
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
    return p1;
}
