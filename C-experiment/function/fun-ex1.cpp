#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int pow(int n);
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("pow(3,%d) = %d \n",i,pow(i));
    }

    return 0;
}
int pow(int n){
    int num;
    while (1)
    {
        if(n==0){
            return 1;
        }else
        {
            num=pow(n-1)*3;
            return num;
        }
        
    }
    

}