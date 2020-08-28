#include "stdio.h"
#include "math.h"
int main(void)
{
	int a,b,c,d;
	double avg,total;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	total = a+b+c+d;
	avg = total/4.0;
	printf("total = %.0f,avg = %.1f",total,avg);
	return 0;
}

