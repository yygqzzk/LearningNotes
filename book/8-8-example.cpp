#include<stdio.h> 
int Bsearch(int *p,int n,int x);
int main(void){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int x,m;
    printf("Enter x:");
    scanf("%d",&x);
    m=Bsearch(a,10,x);
    if(m>=0){
        printf("Index is %d \n",m);
    }else{
        printf("Not Found!");
    }
    
    return 0;
}
int Bsearch(int *p,int n,int x){
    int high,low,mid;
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(x==p[mid]){
            break;
        }else if(x>p[mid]){
            low = mid+1;
        }else if(x<p[mid]){
            high=mid-1;
        }
    }
    if(low <= high)
        return mid;
    else
    
        return -1;
}
