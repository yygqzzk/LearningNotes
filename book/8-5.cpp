#include<stdio.h> 
void sort(int a[],int n);
int main(void){
    int n,a[8];
    printf("Enter n (n<=8):");
    scanf("%d",&n);
    printf("Enter a[%d]:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("After sorted,a[%d] =",n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
void sort(int a[],int n){
    int index,i,j,tmp;
    for(i=0;i<n-1;i++){
        index=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[index]){
                index=j;
            }
        }
        tmp=a[index];
        a[index]=a[i];
        a[i]=tmp;
    }

}
