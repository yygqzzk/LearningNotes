#include<stdio.h> 
int main(void){
    int n,total=0,m=1,a1=1,a2=0,a3=0,tmp;
    scanf("%d",&n);
    while (1)
    {
        total=a1+a2+a3;
        if(total>=n){
            break;
        }
        m+=1;
        tmp = a1;
        a1=a3+a2;
        a3+=a2;
        a2=tmp;
    }
     printf("%d",m);
    return 0;
}
