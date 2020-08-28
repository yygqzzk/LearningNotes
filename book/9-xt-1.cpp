#include<stdio.h> 
struct date {
    int hour,minute,second;
} time;
int main(void){
    int n; 
    printf("Input date :") ;
    scanf("%d%d%d",&time.hour,&time.minute,&time.second);
    printf("Input second:");
    scanf("%d",&n);
    time.second+=n;
    if(time.second/60>0){
        time.minute+=time.second/60;
        time.second=time.second%60;
    }
    if(time.minute/60>0){
        time.hour+=time.minute/60;
        time.minute=time.minute%60;
    }
    if(time.hour/24>0){
        time.hour=time.hour%24;
    }
    printf("New date:%d:%d:%d",time.hour,time.minute,time.second);
    
    return 0;
}