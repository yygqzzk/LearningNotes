#include<stdio.h> 
int main(void){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        for(int k=1;k<n-i;k++){
                printf(" ");
            }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n-2;i+=2){
        for(int k=1;k<=i+1;k++){
                printf(" ");
            }
        for(int j=1;j<=n-i-1;j++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}