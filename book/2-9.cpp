#include "stdio.h"
int main(void)
{
	double x,y,z;
	printf("Enter two nums:\n");
	scanf("%lf%lf",&x,&y);
	
	
	z = x+y;
	printf("%lf + %lf =%.2f\n",x,y,z);
	z = x-y;
	printf("%lf - %lf =%.2f\n",x,y,z);
	z = x*y;
	printf("%lf * %lf =%.2f\n",x,y,z);
	z = x/y;
	printf("%lf / %lf =%.2f\n",x,y,z);
	
	return 0;
}

