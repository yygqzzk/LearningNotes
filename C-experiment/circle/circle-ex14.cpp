#include <stdio.h>
#include <math.h>
int main()
{
    int n,tmp,count=1;
    scanf("%d",&n);
    tmp=n;
    while (tmp/10!=0)
    {
        count++;
        tmp/=10;
    }
    for(int i=1;i<count;i++){
        tmp = n/pow(10,count-i);
        printf("%d ",tmp%10);
    }
   printf("%d ",n%10);

    return 0;
}