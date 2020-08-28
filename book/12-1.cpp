#include<stdio.h> 
#include<stdlib.h>
int main(void){
    FILE *fp;
    long num,high_num,low_num;
    char stname[20],*high_name,*low_name;
    int i,score,max=0,min=1000;
    int avg_score=0;

    if((fp=fopen("E:\\C\\C-study\\C\\FIle\\f12-1.txt","r"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    for(i=0;i<5;i++){
        fscanf(fp,"%ld%s%d",&num,stname,&score);
        if(score>max){
            max=score;
            high_num = num;
            high_name=stname;
        }
        if(score<min){
            min=score;
            low_num=num;
            low_name=stname;
        }
    }
    printf("%ld %s %d\n",high_num,high_name,max);
    printf("%ld %s %d\n",low_num,low_name,min);
    

    if(fclose(fp)){
        printf("Can not close the file!\n");
        exit(0);
    }
    
    return 0;
}