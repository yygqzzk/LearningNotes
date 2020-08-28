#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    FILE *fp;
    char ch;
    if((fp=fopen("E:\\C\\C-study\\C\\FIle\\f12-5.txt","w+")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    ch=getchar();
    while (ch!='\n')
    {
        fputc(ch,fp);
        ch=getchar();
    }
    fputc(ch,fp);

    rewind(fp);

    while (!feof(fp))
    {
        ch=fgetc(fp);
        if(ch!=EOF){
            printf("%c",ch);
        }
        else if(ch == '\n'){
            break;
        }
    }
    if(fclose(fp)){
        printf("Can not close the file!\n");
        exit(0);
    }


    return 0;
}