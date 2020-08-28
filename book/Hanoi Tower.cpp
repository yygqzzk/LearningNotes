#include<stdio.h>
#include<stdlib.h> 
void HanoiTower(int n,char A,char B,char C);
int main(void){
    int n;
    printf("Input num:");
    scanf("%d",&n);
    HanoiTower(n,'A','B','C');
    system("pause");

    return 0;
}
void HanoiTower(int n,char A,char B,char C){
    int count=0;
    if(n==1){
        printf("Move %c->%c\n",A,C);
    }else
    {
        HanoiTower(n-1,A,C,B);
        printf("Move %c->%c\n",A,C);
        HanoiTower(n-1,B,A,C);
    }
}