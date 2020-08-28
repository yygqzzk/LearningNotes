#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    char s[7]={'a','b','c','d','e','f','g'},str[7];
    int n=2;
    int len = strlen(s);
    strcpy(str,s+n);
    strcat(str,s);



    return 0;
}