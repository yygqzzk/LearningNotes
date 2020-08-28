#include<stdio.h> 
#include<math.h>
int fact(int i);

int main(void){
    double x,item,s;
    int i=1;
    printf("Enter x:\n");
    scanf("%lf",&x);
    item=pow(x,0);
    s+=item;
    while (fabs(item)>0.00001)
    {
        item=pow(x,i)/fact(i);
        s+=item;
        i++;
    } 
    printf("s=%.4f",s);
    return 0;
}

int fact(int i){
    int total=1;
    int j;
    for(j=1;j<=i;j++){
        total*=j;
    }
    return total;
}
