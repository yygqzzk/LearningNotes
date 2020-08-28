#include<stdio.h> 
int main(void){
    int i=0,k=0;
    char str[80],hexad[80];
    long num=0;
    while ((str[i]=getchar())!='#')
    {
        i++;
    }
    str[i]='\0';
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9' || str[i]>='a'&&str[i]<='f' || str[i]>='A'&&str[i]<='F' ){
            hexad[k]=str[i];
            k++;
        }
    }
    hexad[k]='\0';
    printf("New string:");
    for(int i=0;hexad[i]!='\0';i++){
        putchar(hexad[i]);
    }
    printf("\n");


    for(int i=0;hexad[i]!='\0';i++){
        if(hexad[i]>='0'&&hexad[i]<='9'){
            num=num*16+hexad[i]-'0';
        }else if(hexad[i]>='A'&&hexad[i]<='F'){
            num=num*16+hexad[i]-'A'+10;
        }else if(hexad[i]>='a'&&hexad[i]<='f'){
            num=num*16+hexad[i]-'a'+10;
        }
    }
    printf("Num=%ld\n",num);


    return 0;
}