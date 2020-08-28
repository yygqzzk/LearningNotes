#include<stdio.h> 
#include<string.h>
char *search(char *s,char *t);
int main(void){
    char s[10],t[10];
    char *p;
    scanf("%s",s);
    scanf("%s",t);
    p=search(s,t);
    printf("%d",p-s);

    return 0;
}
char *search(char *s,char *t){
    char *p;
    int slen=strlen(s),tlen=strlen(t),i,j;
    p=s;
    for(i=0;i<slen;i++){
        if(p[i]==*t){
            for(j=1;j<tlen;j++){
                if(p[i+j]!=t[j]) break;
            }
            if(j==tlen){
                return p+i;
            }
        }
    }
    return NULL;
}