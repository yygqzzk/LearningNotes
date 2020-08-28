#include<stdio.h> 
int countdight(int n,int d);
int main(void){
    int num,dight;
    printf("Enter num & dight:\n");
    scanf("%d%d",&num,&dight);
    printf("count=%d",countdight(num,dight));
    
    return 0;
}
int countdight(int n,int d){
    int count;
    // while (n>0)
    // {
    //     if(n%10==d){
    //     count++;
    //     }
    //     n/=10;
    // }
    do{
        if(n%10==d){
        count++;
        }
        n/=10;
    }while (n>0);
    
    return count;
}