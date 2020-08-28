#include <stdio.h>
int main()
{
    int n;
    char word;
    word='A';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("%c ",word);
            word++;
        }
        printf("\n");
    }
    
    
   
    return 0;
}