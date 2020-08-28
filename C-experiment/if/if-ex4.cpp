#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main(void){
    int num,i=0;
    do{
        printf("[1]apple\n");
        printf("[2]pear\n");
        printf("[3]orange\n");
        printf("[4]grape\n");
        printf("[0]exit\n");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            printf("price=3.0\n");
            break;
        case 2:
            printf("price=2.5\n");
            break;
        case 3:
            printf("price=4.1\n");
            break;
        case 4:
            printf("price=10.2\n");
            break;
        case 0:
            i=5;
            break;
        default:
            printf("price=0\n");
            break;
        }
        i++;
    }while (i<5);

    return 0;
}