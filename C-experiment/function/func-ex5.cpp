#include <stdio.h>
int main(void)
{
    char op;
    int num1, num2, res;
    printf("Enter  equation :\n");
    scanf("%d", &num1);
    op = getchar();
    while (op != '=')
    {
        scanf("%d",&num2);
        switch (op)
        {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        default:
            res=0;            
        }
        num1 = res;
        op=getchar();
    }
    printf("%d\n",res);
    
    return 0;
}