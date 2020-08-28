#include <stdio.h>
#include <math.h>
int diagnose(int i);
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        k=pow(2,i)-1;
        if(diagnose(k)){
            printf("%d\n",k);
        }
    }

    return 0;
}
int diagnose(int i)
{
    int m;
    for (m = 2; m < i; m++)
    {
        if (i % m == 0)
        {
            return false;
        }
    }
    if (m >= i && m != 2)
    {
        return true;
    }
    return false;
}