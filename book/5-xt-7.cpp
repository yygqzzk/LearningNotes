#include<stdio.h> 
#include<math.h>
double funcous(double e,double x);
int fact(int x);
int main(void){
    double e,x,cosx;
    printf("Enter e & x:\n");
    scanf("%lf%lf",&e,&x);
    cosx=funcous(e,x);
    printf("cosx=%lf",cosx);

    return 0;
}
double funcous(double e,double x){
    int flag=1,i=0;
    double item=1,total=0;
    while (fabs(item)>=e)
    {
        item=(pow(x,i)/fact(i))*flag;
        flag=-flag;
        i+=2;
        total+=item;
    }
    return total;
}
int fact(int x){
    int total=1;
    if(x==0){
        return 1;
    }
    for(int i=1;i<=x;i++){
        total*=i;
    }
    return total;
}




