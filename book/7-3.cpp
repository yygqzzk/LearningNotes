#include<stdio.h> 
int main(void){
    int a[10];
    int n;
    printf("Enter n (0<n<=10):\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter num:\n");
        scanf("%d",&a[n-i-1]);
    }
    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    

    return 0;
}