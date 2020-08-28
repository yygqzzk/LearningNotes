#include<stdio.h> 
int main(void){
    char ch;
    int count=0,flag;
    ch=getchar();
    while (ch!='\n')
    {
        if(ch==' '){
            flag=0;
        }else if(flag ==0){
            count++;
            flag=1;
        }
        ch=getchar();
    }
    printf("count = %d",count);


    return 0;
}