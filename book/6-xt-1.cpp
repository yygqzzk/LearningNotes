#include<stdio.h> 
int main(void){
    char ch;
    int letter=0,num=0,space=0,other=0;
    printf("Input characters:\n");
    ch=getchar();
    while (ch!='\n')
    {
        if (ch>='A' && ch<='Z' || ch>='a' && ch <='z')
        {
            letter++;
        }else if(ch >= '0' && ch<='9')
        {
            num++;
        }else if(ch == ' '){
            space++;
        }else
        {
            other++;
        }
        ch=getchar();        
    }
    printf("letter=%d,num=%d,space=%d,other=%d",letter,num,space,other);



    return 0;
}