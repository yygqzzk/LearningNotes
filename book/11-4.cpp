#include<stdio.h> 
char *match (char *s,char ch);
int main(void){
    char ch,str[80],*p=NULL;
    printf("Input str:");
    scanf("%s",str);
    getchar();
    ch=getchar();
    if(((p=match(str,ch)))!=NULL){
        printf("address=%x",p);
    }else
    {
        printf("Not Found \n");
    }

    return 0;
}
char *match (char *s,char ch){
    char *ps=NULL;
    while (*s!='\0')
    {
        if(*s==ch){
            ps=s;
        }
        s++;
    }
    if(*ps==NULL){
        return NULL;
    }else
    {
        return ps;
    }
}