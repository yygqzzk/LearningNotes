#include<stdio.h> 
int main(void){
    int i,tip;
    double price;

    for(i=1;i<=5;i++){
        printf("[1]apples\n");
        printf("[2]pears\n");
        printf("[3]oranges\n");
        printf("[4]garpes\n");
        printf("[0]Exit\n");
        printf("Enter your help:\n");
        scanf("%d",&tip);
        if(tip == 0){
            break;
        }
        switch (tip)
        {
        case 1:
            price=3.00;
            break;
        case 2:
            price=2.50;
            break;
        case 3:
            price=4.10;
            break;            
        case 4:
            price=10.20;
            break;
        default:
            price=0.00;
            break;            
        }
        printf("price:%.2f\n",price);

    }
    printf("thanks!");



    return 0;
}