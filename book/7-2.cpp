#include<stdio.h> 
int main(void){
    int i,flag,n,max=0,index,tmp;
    int a[10];
    printf("Enter n(1<n<=10):\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter num:\n");
        scanf("%d",&a[i]);
        if(a[max]<=a[i]){
            tmp = a[i];
            index = i;
        }
    }
    printf("max=%d,index=%d",tmp,index);


    return 0;
}