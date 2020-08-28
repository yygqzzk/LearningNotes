#include<stdio.h> 
#include<stdlib.h>
int search(int list[],int n,int x);
int main(void){
    int *a,n,x,index;
    printf("Enter n:");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    printf("Enter list[%d]:",n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("Enter x:");
    scanf("%d",&x);
    if(search(a,n,x)>=0){
        printf("index=%d",search(a,n,x));
    }else
    {
        printf("Not found!");
    }

    return 0;
}
int search(int *list,int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(x==list[i]/* *(list+i) */){
            return i;
        }
    }
    if(i>=n){
        return -1;
    }

}