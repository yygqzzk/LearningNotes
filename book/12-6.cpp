#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int round(double x);
int main(void){
    FILE *fp1,*fp2;
    double x;
    if((fp1=fopen("E:\\C\\C-study\\C\\FIle\\f12-6-1.txt","r")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    if((fp2=fopen("E:\\C\\C-study\\C\\FIle\\f12-6-2.txt","w+")) == NULL){
        printf("File open error!\n");
        exit(0);
    }
    while (!feof(fp1))
    {
        fscanf(fp1,"%lf",&x);
        fprintf(fp2,"%d ",round(x));
    }
    if(fclose(fp1)){
        printf("Can not close the file!\n");
        exit(0);
    }
    if(fclose(fp2)){
        printf("Can not close the file!\n");
        exit(0);
    }

    return 0;
}
int round(double x){
    int y;
    x=x*10;
    x+=5;
    y=x/10;
    return  y;
}