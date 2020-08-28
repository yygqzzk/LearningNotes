#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    FILE *fp;
    char str[3]={'f','o','r'},*p,arr[80];
    int i,j;
    p=arr;
    fp=fopen("E:\\C\\C-study\\C\\FIle\\test.txt","r");
    while (!feof(fp))
    {
        fgets(p,80,fp);

        for(i=0;i<strlen(p)-3;i++){
            if(p[i]=='f'){
                for(j=1;j<3;j++){
                    if(p[i+j]!=str[j]){
                        break;
                    }
                }
                if(j>=3){
                    printf("%s",p);
                }
            }
        }
    }

    return 0;
}