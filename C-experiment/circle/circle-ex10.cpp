#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
double fact(int i);
int main(void){
    int n;
    double e=1.0,x=1.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=i;j++){
        //     x*=j;
        // }
        x=fact(i);
        e+=(1/x);
        // x=1;
    }
    printf("%.4lf",e);

    return 0;
}
double fact(int i){
    if(i==1){
        return 1;
    }else{
        i = fact(i-1)*i;
        return i;
    }
}