#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    double num;
    FILE *fp;
    fp=fopen("E:\\C\\C-study\\C\\FIle\\f12-xt-2.txt","w");
    
    while (num!= -1)
    {
        scanf("%lf",&num);
        fprintf(fp,"%lf ",num);
    }
    fclose(fp);



    return 0;
}