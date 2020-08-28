#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
int max_len(char *s[],int n);
int main(void){
    int n;
    char *str[10];

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        str[i] = (char *)malloc(sizeof(char)*20);
        scanf("%s",str[i]);
    }

    printf("Max length:%d",max_len(str,n));


    return 0;
}
int max_len(char *s[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(strlen(s[i])>max){
            max = strlen(s[i]);
        }
    }
    return max;

}