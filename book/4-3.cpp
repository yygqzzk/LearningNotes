#include<stdio.h> 
#include<math.h>
int main(void){
     int eps,flag=1.0,denominator=1;
     double item=1.0,total;
     printf("Enter eps:\n");
     scanf("%d",&eps);
     while (item>pow(10,-eps))
     {
         item = flag*(1.0/denominator);
         total+=item;
         denominator+=3;
         flag=-flag;
     }
     printf("total:%.6f",total);



    return 0;
}