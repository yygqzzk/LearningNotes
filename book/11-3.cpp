#include<stdio.h> 
#include<string.h>
void fsort (char *color[],int n);
int main(void){
    int i;
    char *pcolor[]={"red","blue","yellow","green","black"};
    fsort(pcolor,5);
    for (i=0;i<5;i++)
    { 
        printf("%s ",pcolor[i]);
    }
    return 0;
}
void fsort(char *color[],int n){
    char * *pc;
    char *temp;
    pc=color;
    for(int k=1;k<n;k++){
        for(int j=0;j<n-k;j++){
            if(strcmp(*(pc+j),*(pc+j+1))>0){
                temp=*(pc+j+1);
                *(pc+j+1)=*(pc+j);
                *(pc+j)=temp;
            }
        }

    }


}