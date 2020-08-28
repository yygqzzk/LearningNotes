#include<stdio.h> 
#include<math.h>
int main(void){
    int i,n,arr[10],max,index;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    arr[i]='\0';
    max=arr[0];
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    printf("%d %d",max,index);


    return 0;
}