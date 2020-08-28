#include<stdio.h> 
struct book{
    char name[80];
    float price;
};
int main(void){
    struct book catlogue[5]={{"Vue js",150},{"Axure",190},{"C programe",120},{"Advanced Math",10},{"English",140}};
    int max,min;
    max=min=0;
    for(int i=0;i<5;i++){
        if(catlogue[i].price>catlogue[max].price){
            max=i;
        }
        if(catlogue[i].price<catlogue[min].price){
            min=i;
        }
    }
    printf("pensive book is %s,prince is %.2f\ncheap book is %s,prince is %.2f",catlogue[max].name,catlogue[max].price,catlogue[min].name,catlogue[min].price);


    return 0;
}