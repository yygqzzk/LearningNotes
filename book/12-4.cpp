#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main(void){
    FILE *fp;
    char ch;
    int count;
    if((fp=fopen("E:\\C\\C-study\\C\\FIle\\f12-2.txt","r")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    while (!feof(fp))
    {
        ch=fgetc(fp);
        if(ch!=EOF){
            if (ch >= 'a' && ch <= 'z')
            {
                ch = 'A' + (ch - 'a');
            }
            if (ch == '\n')
            {
                count++;
            }
            printf("%c", ch);
        }
        
    }
    if(fclose(fp)){
        printf("Can not close the file!\n");
        exit(0);
    }


    return 0;
}