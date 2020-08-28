#include<stdio.h> 
int main(void){
    int n,a[6][6],flag=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i][j]!=0){
                printf("No!");
                flag=1;
                break;
            }
        }
        if(flag!=0){
            break;
        }
    }
    if (flag==0)
    {
       printf("Yes!");
    }
    
    return 0;
}