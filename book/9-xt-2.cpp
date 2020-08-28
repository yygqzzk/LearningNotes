#include<stdio.h> 
struct complex{
      double real,image;
} s1={1,4},s2{3,9};
int main(void){
    printf("(a1+a2i)*(b1+b2i): real=%.2f,image=%.2f",(s1.real*s2.real)-(s1.image*s2.image),(s1.real*s2.image)+(s1.image*s2.real));
    
    return 0;
}