#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    FILE *fp1,*fp2;
    int row=1,col=1;
    char ch1,ch2;
    fp1=fopen("./FIle/txt1.txt","r");
    fp2=fopen("./FIle/txt2.txt","r");
    while (!feof(fp1))
    {
        ch1=fgetc(fp1);
        ch2=fgetc(fp2);
        col++;
        if(ch1!=ch2){
            break;
        }
        if(ch1=='\n'){
            row++;
            col=0;
        }
    }
    printf("Differnce in (row %d,col %d)",row,col);
    fclose(fp1);
    fclose(fp2);

    return 0;
}