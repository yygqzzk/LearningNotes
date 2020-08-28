#include "stdio.h"
#include "math.h"


int main(void)
{
	int n,i;
	double product;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		product = pow(n,i);
		printf("pow(%d,%d)=%.1f\n",n,i,product);
	} 
	
	
	
	return 0;
}



