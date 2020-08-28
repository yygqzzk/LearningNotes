#include<stdio.h> 
int main(void){
    int i=0,j;
    char str[80],search='\0';
    printf("Enter character & str:");
    search=getchar();
    while ( (str[i]=getchar()) !='\n')
    {
        i++;
    }
    str[i]='\0';
    for(j=0;str[j]!='\0';j++){
        if (str[j]==search){
            break;
        }
    }
    if(j==i){
        printf("Not Found!");
    }else
    {
        printf("%d",j);
    }
    


    return 0;
}