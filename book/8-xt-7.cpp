#include<stdio.h> 
#include<string.h>
int main(void){
    char str[5][80],stemp[80];
    int index;
    for(int i=0;i<5;i++){
        gets(str[i]);
    }
    for(int i=0;i<4;i++){
        index=i;
        for(int j=i+1;j<5;j++){
            if(strcmp(str[index],str[j])>0){
                index=j;
            }
        }
        strcpy(stemp,str[i]);
        strcpy(str[i],str[index]);
        strcpy(str[index],stemp);
    }
    for(int i=0;i<5;i++){
        puts(str[i]);
    }

    return 0;
}