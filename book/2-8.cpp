#include "stdio.h"
int main(void)
{	
	double fahr,celsius;
	printf("Enter fahr:\n");
	scanf("%lf",&fahr);
	celsius=5*(fahr-32)/9;
	printf("fahr=%f,celsius=%.2f\n",fahr,celsius);
	
	
	return 0;
}
