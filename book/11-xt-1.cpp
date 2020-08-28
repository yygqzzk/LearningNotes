#include<stdio.h> 
int main(void){
    const char *mon[]={"January","Februry","March","April","May","June","July","August","September","October","November","December"};
    int m;
    scanf("%d",&m);
    printf("%s",mon[m-1]);



    return 0;
}