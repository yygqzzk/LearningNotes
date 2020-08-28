#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h>
int remake(int num,int t);
int main(void){
    int n,k,x,y,z;
    int max,min;
    scanf("%d",&n);

    while (n!=495)
    {
        max=remake(n,1);
        min=remake(n,0);
        printf("%d - %d = %d\n",max,min,max-min);
        n=max-min;
    }
    
    return 0;
}
int remake(int num,int t){
    int a[3],tmp;
    int r=0;

    a[0]=num%10;
    num/=10;
    a[1]=num%10;
    num/=10;
    a[2]=num;

    if(t==0){
        for(int j=0;j<2;j++){
            for(int i=0;i<2-j;i++){
                if(a[i]>a[i+1]){
                    tmp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=tmp;
                }
            }
        }
        
        r+=a[0]*100;
        r+=a[1]*10;
        r+=a[2];
        return r;

    }else if(t==1){
        for(int j=0;j<2;j++){
            for(int i=0;i<2-j;i++){
                if(a[i]<a[i+1]){
                    tmp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=tmp;
                }
            }
        }
        r+=a[0]*100;
        r+=a[1]*10;
        r+=a[2];
        return r;

    }
    return 0;
}