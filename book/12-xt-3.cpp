#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int num,total=0;
    FILE *fp;
    fp=fopen("E:\\C\\C-study\\C\\FIle\\Int_Data.dat","ab+");
    
    while (!feof(fp))
    {
        fscanf(fp,"%d",&num);
        total+=num;
    }
    fprintf(fp,"%d",total);
    fclose(fp);

    return 0;
}