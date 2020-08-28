#include<stdio.h> 
#include<math.h>
int main(void){
    int n;
    double sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=sqrt(i);
    }
    printf("%.2lf",sum);
    

    return 0;
}