#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
int main(void){
    int count,mynumber,yournumber,flag,i;
    srand(time(0));
    printf("Enter count:\n");
    scanf("%d",&count);
    mynumber=rand()%100+1;
    flag=0;
    i=1;
    while (i<=count)
    {
        printf("Enter yournumber[1,100]:\n");
        scanf("%d",&yournumber);
        if(yournumber<=0){
            break;
        }
        if(yournumber == mynumber){
            flag = 1;
            if(i==1){
                printf("Bingo!");
            }else if(i<=3){
                printf("Lucky You!");
            }else{
                printf("Good Guess!");
            }
            break;
        }
        else
        {
            if(yournumber>mynumber){
                printf("Too big!\n");
            }else
            {
               printf("Too small!\n");
            }
            i++;
        }
    }
    if(flag==0){
        printf("Game Over! \n");
    }
    system("PAUSE");
    return 0;
}