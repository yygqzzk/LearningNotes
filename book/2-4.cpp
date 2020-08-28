#include "stdio.h"
#include "math.h"
int main(void) 
{
	int money,years;
	double rate,sum;
	printf("Enter money:");
	scanf("%d",&money);
	printf("Enter years:");
	scanf("%d",&years);
	printf("Enter rate:");
	scanf("%lf",&rate);
	
	sum=money*pow(1+rate,years);
	
	printf("sum=%.2f\n",sum);
	
	return 0;
}
