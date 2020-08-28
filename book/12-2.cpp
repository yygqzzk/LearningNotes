#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
typedef struct sysuser {
    char username[20];
    char passworld[8];
}User;
void encrypt(char *pwd);
int main(void){
    User su;
    FILE *fp;
    int i;
    if((fp=fopen("E:\\C\\C-study\\C\\FIle\\f12-2.txt","w")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    for(i=1;i<=5;i++){
        printf("Enter %d.th User (name,password):",i);
        scanf("%s%s",&su.username,&su.passworld);
        encrypt(su.passworld);
        fprintf(fp,"%s %s\n",su.username,su.passworld);
    }
    if(fclose(fp)){
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}
void encrypt(char *pwd){
    for(;*pwd!='\0';pwd++){
        if(*pwd=='z')
            *pwd='a';
        else
            *pwd=*pwd+1;
    }
}