#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    FILE *fp;
    char ch;
    int word,num,other;
    fp=fopen("E:\\C\\C-study\\C\\FIle\\f12-xt-1.txt","r");
    while (!feof(fp))
    {
        ch=fgetc(fp);
        if(ch!=EOF){
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) word++;
            else if(ch>='0' && ch <='9') num++;
            else other++;
        }
    }
    printf("word:%d  num:%d  other:%d  ",word,num,other);
    fclose(fp);
    
    return 0;
}