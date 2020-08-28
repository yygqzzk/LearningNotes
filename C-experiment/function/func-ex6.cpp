#include <stdio.h>
int main(void)
{
    char str;
    int count,flag=0;
    str=getchar();
    while (str !='\n')
    {
        if(str!=' '){
            flag=1;
        }
        if(str==' ' && flag == 1){
            count++;
            flag=0;
        }
        str=getchar();
    }
    printf("%d\n",count);
    
    return 0;
}