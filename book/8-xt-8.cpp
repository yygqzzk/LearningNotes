#include<stdio.h> 
#include<string.h>
int main(void){
    char str[80];
    int p,q,flag=0;
    gets(str);
    p=0;
    q=strlen(str)-1;
    while (p<q)
    {
        if(str[p]!=str[q]){
            flag=1;
            break;
        }
        p++;
        q--;
    }
    if(flag==0){
        printf("Yes");
    }else
    {
        printf("No");
    }

    return 0;
}