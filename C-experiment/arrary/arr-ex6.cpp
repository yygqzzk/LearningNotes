#include <stdio.h>
#include <math.h>
int sub(int *a,int index);
int main(void)
{
    int i,n,a[10],b[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for(i=1;i<n;i++){
        b[i-1]=sub(a,i);
    }
    for(i=0;i<n-1;i++){
        printf("%d ",b[i]);
        if((i+1)%3==0){
            printf("\n");
        }
    }
    

    return 0;
}
int sub(int *a,int index){
    if(index==0){
        return a[index];
    }else
    {
        return a[index]-a[index-1];
    }
    

}