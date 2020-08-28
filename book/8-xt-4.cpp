#include<stdio.h> 
#include<stdlib.h>
int main(void){
    int a[80],n,m,out=0,*p,count=0,i;
    printf("Enter n & m :");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        a[i]=i+1;
    }
    p=a;

    while (out<n-1)
    {
        if(*p!=0) {count++;}
        if(count == m){
            out++;
            printf("Out=%d,count=%d \n",out,*p);
            *p=0;
            count=0;
        }
        p++;
        if(p==a+n){
            p=a;
        }
    }
    p=a;
    while (*p==0)
    {
        p++;
    }
    printf("Last Out:%d",*p);
    
    



    return 0;
}