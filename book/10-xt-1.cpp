#include<stdio.h> 
#include<math.h>
int f(int num);
int main(void){
    int n;
    printf("Input num:");
    scanf("%d",&n);

    printf("count = %d",f(n));

    return 0;
}
int f(int num){
    int i,count=0;
    for(i=101;i<=num;i++){
        if(((int)sqrt(i) * (int)sqrt(i) == i)){
            if(i%10==(i/10)%10||i%10==(i/100)||(i/10)%10==(i/100)){
                count++;
            }
        }
    }
    return count;

}