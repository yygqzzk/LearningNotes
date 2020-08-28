#include<stdio.h> 
int main(void){
    int n,arr[10],min,index=0,i,j,tmp;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        min=arr[i];
        for(j=i;j<n;j++){
            if(arr[j]<min){
                index=j;
                min=arr[index];
            }
        }
        if(i!=index){
            arr[i]^=arr[index]^=arr[i]^=arr[index];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}