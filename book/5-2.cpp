#include<stdio.h> 
int max(int a,int b);
int main(void){
    int a,b;
    printf("Enter a & b:\n");
    scanf("%d%d",&a,&b);
    printf("max=%d",max(a,b));


    return 0;
}
int max(int a,int b){
    if(a-b>=0){
        return a;
    }else
    {
        return b;
    }
    
    

}
