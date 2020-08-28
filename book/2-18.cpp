#include "stdio.h"
#include "math.h"
double fact(int n);

int main(void)
{
	int n,m;
	double result;
	printf("Enter m & n (m<=n):\n");
	scanf("%d%d",&m,&n);
	result=fact(n-m);
	
	result=fact(n)/(fact(m)*fact(n-m));
	printf("The result is :%.2f",result);
	
	return 0;
}

double fact(int n)
{
	int i;
	double product;
	product = 1;
	for(i=1;i<=n;i++){
		product=product*i;
	}
	return product;
}



