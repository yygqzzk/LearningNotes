#include<stdio.h> 
#include<math.h>
int main(void){
    int i,n,arr[10];
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        scanf("%d",arr+i);
    }
    arr[n]='\0';
    for(i=0;arr[i]!='\0';i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}