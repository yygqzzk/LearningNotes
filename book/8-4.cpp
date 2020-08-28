#include<stdio.h> 
void bubble (int a[],int n);
int main(void){
    int n,a[8];
    printf("Enter n (n<=8):");
    scanf("%d",&n);
    printf("Enter a[%d]:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    printf("After sorted,a[%d] =",n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
void bubble (int a[],int n){
    int flag=0,count=0;
    for(int i=1;i<n;i++,count++){
        flag=0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                a[j]^=a[j+1]^=a[j]^=a[j+1];
                flag=1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    printf("count = %d",count);


}
