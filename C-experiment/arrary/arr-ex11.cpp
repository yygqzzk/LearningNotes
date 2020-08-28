#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,j,a[10],b[10]={0},*p,index,min,tmp;
    p=b;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", a + i);
    }
    for(i=0;i<10;i++){
        for(j=0;j<a[i];j++){
            *p = i;
            p++;
        }
    }
    *p = -1;

    for(i=0;b[i]!=-1;i++){
        min=10;
        index=i;
        for(j=i;b[j]!=-1;j++){
            if(i==0){
                if(b[j]<min && b[j]!=0){
                    index=j;
                    min=b[j];
                }
            }else
            {
                if(b[j]<min){
                    index=j;
                    min=b[j];
                }
            }
        }
        tmp=b[i];
        b[i]=b[index];
        b[index]=tmp;
    }

    for(i=0;b[i]!=-1;i++){
        printf("%d",b[i]);
    }

    return 0;
}
