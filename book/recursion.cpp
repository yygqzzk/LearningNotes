#include<stdio.h> 
int max(int *arr,int n);
int main(void){
    int arr[]={7,4,8,6,3,2,9,11,5};
    printf("%d",max(arr,8));

    return 0;
}
int max(int *arr,int n){
    if(n==0){
        return arr[0];
    }
    if(max(arr,n-1)>arr[n]){
        return max(arr,n-1);
    }else
    {
        return arr[n];
    }


}