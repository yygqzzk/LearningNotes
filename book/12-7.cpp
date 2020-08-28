#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
long size;
typedef struct LogData{
    long logid;
    char logdate[11];
    char lognote[15];
    double charge;
    double blance;
}Data;

int inputchoice(){
    int mychoice;

    printf("\nEnter your choice:\n");
    printf("1 - Add a new Cash Log.  \n2 - List All Cash Log. \n");
    printf("3 - Query Last Cash Log. \n4 - Update a Cash Log. \n");
    printf("0 - END PROGRAM. \n");
    scanf("%d",&mychoice);

    return mychoice;
};

long getLogcount(FILE *fp){
    long begin,end,logcount;

    fseek(fp,0L,0);
    begin=ftell(fp);
    fseek(fp,size,2);
    end=ftell(fp);
    logcount = (end-begin)/size - 1;

    return logcount;
};

void ListAllLog(FILE *fp){
    Data log;

    fseek(fp,0L,0);
    fread(&log,size,1,fp);
    printf("logid logdate lognote charge blance \n");
    while (!feof(fp))
    {
        printf("% 6ld %-11s %-15s %10.2lf %10.2lf\n",log.logid,log.logdate,log.lognote,log.charge,log.blance);
        fread(&log,size,1,fp);
    }
};

void QueryLastLog(FILE *fp){
    Data log;
    long logcount;

    logcount = getLogcount(fp);
    if(logcount > 0){
        fseek(fp,size*(logcount-1),0);
        fread(&log,size,1,fp);
        printf("The last log is: \n");
        printf("logid:%-6ld \nlogdate:%-11s \nlognote:%-15s \n",log.logid,log.logdate,log.lognote);
        printf("charge:%-10.2lf \nbalance:%-10.2lf \n",log.charge,log.blance);
    }
    else printf("No logs in file! \n");
}

void AddNewLog(FILE *fp){
    Data log,lastlog;
    long logcount;

    printf("Input logdate (format:2020-01-01):");
    scanf("%s",log.logdate);
    printf("Input lognote:");
    scanf("%s",log.lognote);
    printf("Input Charge: Income+ and expend- :");
    scanf("%lf",&log.charge);
    logcount = getLogcount(fp);

    if(logcount>0){
        fseek(fp,size*(logcount-1),0);
        fread(&lastlog,size,1,fp);
        log.logid=lastlog.logid+1;
        log.blance = lastlog.blance+log.charge;
    }else{
        log.logid=1;
        log.blance=log.charge;
    }
    rewind(fp);
    printf("logid=%ld \n",log.logid);

    fwrite(&log,size,1,fp);

}
FILE *openfile(char *openmode){
    FILE *fp;

    if((fp=fopen("E:\\C\\C-study\\C\\FIle\\cashbox.dat",openmode))== NULL){
        printf("Can not open file cashbox.dat! \n");
        exit(0);
    }
    return (fp);
}

void keepblance(FILE *fp){
    Data log;
    long count,blance;
    int i;
    count=getLogcount(fp);
    fseek(fp,0L,0);
    
    for(i=0;i<count;i++){
        fread(&log,size,1,fp);

        if(i==0){
            log.blance=log.charge;
            blance=log.blance;
            fseek(fp,-size,1);
            fwrite(&log, size, 1, fp);
        }else
        {
            log.blance=log.charge+blance;
            fseek(fp,size*i,0);
            fwrite(&log, size, 1, fp);
        }

    }
}

void UpdateLog(FILE *fp){
    Data newlog,log;
    int flag=0;
    printf("Input ID which you want to change:");
    scanf("%ld",&newlog.logid);
    fseek(fp,0L,0);
    while (!feof(fp))
    {
        if(fread(&log,size,1,fp)!=EOF){
            if(log.logid == newlog.logid){
                flag=1;
                printf("Input new logdate: ");
                scanf("%s",newlog.logdate);
                printf("Input new lognote: ");
                scanf("%s",newlog.lognote);
                printf("Input new charge: ");
                scanf("%lf",&newlog.charge);
                fseek(fp, -(size), 1);
                fwrite(&newlog, size, 1, fp);
                // keepblance(fp);
                break;
            }
        }
    }
    if(flag == 0){
        printf("\nCan not find this log !\n");
    }
}


int main(void){
    FILE *fp;
    int choice;
    size =sizeof(Data);
    
    while((choice=inputchoice())!= 0 ){
        switch (choice)
        {
        case 1:
            fp=openfile("ab+");
            AddNewLog(fp);
            fclose(fp);
            break;
        case 2:
            fp=openfile("rb");
            ListAllLog(fp);
            fclose(fp);
            break;
        case 3:
            fp=openfile("rb");
            QueryLastLog(fp);
            fclose(fp);
            break;
        case 4:
            fp=openfile("rb+");
            UpdateLog(fp);
            fclose(fp);
            break;
        default:
            printf("Input Error.");
            break;
        }
    }
    if(fclose(fp)){
        printf("Can not close the file! \n");
        exit(0);
    }

    return 0;
}






