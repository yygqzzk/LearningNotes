#include <stdio.h>
#include <math.h>
int Fib(int n);
int main()
{
    int m,n,i=2;
    scanf("%d%d",&m,&n);
    for(m;m<=n;m++){
        while (Fib(i)<m)
        {
            i++;
        }
        if(Fib(i)==m) printf("%d ",Fib(i));
        i=2;
    }

    return 0;
}

int Fib(int n){
    if(n<=2){
        return 1;
    }else
    {
        return Fib(n-1)+Fib(n-2);
    }
    
}
