#include<stdio.h> 
#include<string.h>
int main(void){
    char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"};
    char str[80];
    int i;
    scanf("%s",str);
    for(i=0;i<7;i++){
        if(stricmp(str,*(week+i)) == 0){
            printf("%d",i);
            break;
        }
    }
    if(i==7){
        printf("-1");
    }

    return 0;

}