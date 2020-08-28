#include<stdio.h> 
#include<string.h>
int main(void){
    char line[80],str[4];
    gets(line);
    if(strlen(line)>3){
        for(int i=0;i<3;i++){
            str[i]=line[i];
        }
        strcpy(line,line+3);
        strcat(line,str);
        printf("%s",line);
        
    }else
    {
        printf("%s",line);
    }

    return 0;
}