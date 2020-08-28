#include<stdio.h> 
int main(void){
    int m,n,a[6][6],row=0;
    printf("Enter m&n :");
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++){
            row+=a[i][j];
        }
        printf("%d \n",row);
        row=0;
    }
    



    return 0;
}