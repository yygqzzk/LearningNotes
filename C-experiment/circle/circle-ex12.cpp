#include <stdio.h>
int main()
{
    int hun, ten, ind, n,m;
    scanf("%d%d",&m,&n);
    
    for( m; m<n; m++ )
    {
        hun = m / 100;
        ten = (m-hun*100) / 10;
        ind = m % 10;
        if(m == hun*hun*hun + ten*ten*ten + ind*ind*ind) 
            printf("%d \n", m);
    }
   
    return 0;
}