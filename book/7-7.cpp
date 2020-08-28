#include<stdio.h> 
int main(void){
    int n,num,amount=0;
    int a[6][6];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num);
            a[i][j]=num;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n-1-i!=j && i!=n-1 && j!=n-1){
                amount+=a[i][j];
            }
        }
    }
    printf("amount=%d",amount);


    return 0;
}