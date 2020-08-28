#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
int main(void){
    FILE *fp1,*fp2;
    char ch;
    int count=0;
    if((fp1=fopen("E:\\C\\C-study\\C\\FIle\\f12-2.txt","r")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    if((fp2=fopen("E:\\C\\C-study\\C\\FIle\\f12-3.txt","w")) == NULL){
        printf("File open error!\n");
        exit(0);
    }

    while (!feof(fp1))
    {
        ch=fgetc(fp1);
        if(ch!=EOF) {
            fputc(ch,fp2);
            count++;
        };
    }

    

    if(fclose(fp2)){
        printf("Can not close the file!\n");
        exit(0);
    }
    

    if(fclose(fp1)){
        printf("Can not close the file!\n");
        exit(0);
    }

    
    printf("%d",count);

    

    return 0;
}
