#include<stdio.h> 
struct date{
    int year,month,day;
};
struct contact{
    char name[80];
    struct date birth;
    char num[80];
};
int main(void){
    struct contact catlogue[80],temp;
    int n,i,max,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Input contact No.%d:\n",i+1);
        printf("Name :");
        scanf("%s",&catlogue[i].name);
        printf("Birth :");
        scanf("%d%d%d",&catlogue[i].birth.year,&catlogue[i].birth.month,&catlogue[i].birth.day);
        printf("Phone Number :");
        scanf("%s",&catlogue[i].num);
    }
    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(catlogue[j].birth.year<catlogue[max].birth.year){
                max=j;
            }else if(catlogue[j].birth.year==catlogue[max].birth.year)
            {
                if(catlogue[j].birth.month<catlogue[max].birth.month){
                    max=j;
                }else if(catlogue[j].birth.month==catlogue[max].birth.month){
                    if(catlogue[j].birth.day<catlogue[max].birth.day){
                        max=j;
                    }
                }
            }
        }
        temp=catlogue[i];
        catlogue[i]=catlogue[max];
        catlogue[max]=temp;
    }
    for(i=0;i<n;i++){
        printf("Name:%s,Birth:%d/%d/%d,Num:%s\n",catlogue[i].name,catlogue[i].birth.year,catlogue[i].birth.month,catlogue[i].birth.day,catlogue[i].num);
    }

    return 0;
}