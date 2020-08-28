#include<stdio.h> 
#include<stdlib.h>
void buble(int p[],int n);
int main(void){
    int n,*p;
    printf("Enter n:");
    scanf("%d",&n);
    if((p=(int *)calloc(n,sizeof(int)))== NULL){
        printf("Not able to allocate memory.\n");
        exit(1);
    }
    printf("Enter p[%d]:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    buble(p,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",p[i]);
    }

    return 0;
}
void buble(int p[],int n){
    int flag=0;
    for(int i=1;i<n;i++){
        flag=0;
        for(int j=0;j<n-i;j++){
            if(p[j]>p[j+1]){
                p[j]^=p[j+1]^=p[j]^=p[j+1];
                flag=1;
            }
        }
        if(flag==0){
            return;
        }
    }
}