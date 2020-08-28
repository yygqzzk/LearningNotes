#include <stdio.h>
#include <math.h>
int countdigit(int number,int digit);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",countdigit(n,0));

    return 0;
}
int countdigit(int number,int digit){
    int count;
    while (number/10!=0)
    {
        if(number%10==digit){
            count++;
        }
        number/=10;
    }
    if (number == digit)
    {
        count++;
    }
    
    return count;
}
