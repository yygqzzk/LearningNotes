#include<stdio.h> 
#include<string.h>
void strmcpy(char *s,char *t,int m);
int main(void){
    int m;
    char t[80],s[80];
    printf("Enter a string:");
    gets(t);
    printf("Enter m:");
    scanf("%d",&m);
    strmcpy(s,t,m);

    return 0;
}
void strmcpy(char *s,char *t,int m){
    strcpy(s,t+m);
    printf("%s",s);
}