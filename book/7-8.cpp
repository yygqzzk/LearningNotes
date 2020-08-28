#include<stdio.h> 
int main(void){
    int m,n;
    int a1[6][6],a2[6][6];
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j+m<=n-1){
                a2[i][j+m]=a1[i][j];
            }else if(j+m>n-1){
                a2[i][j+m-n]=a1[i][j];
            }
        }
    }




    return 0;
}