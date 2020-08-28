#include <stdio.h>
#include <math.h>
int is(int num);
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    for(m;m<=n;m++){
        if(is(m)){
            printf("%d\n",m);
        }
    }

    return 0;
}
int is(int num){
    int i,sum=0,p;
    double a[8];
    p=num;
    i=0;
    while (num/10!=0)
    {
        a[i]=num%10;
        i++;
        num/=10;
    }
    a[i]=num;
    
    sum+=pow(a[2],3);
    sum+=pow(a[1],3);
    sum+=pow(a[0],3);
    
    if(sum == p){
        return true;
    }else
    {
        return false;
    }
    
    
}
