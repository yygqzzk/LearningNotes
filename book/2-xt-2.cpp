#include "stdio.h"
#include "math.h"
int main(void)
{
	int kw;
	double cost;
	scanf("%d",&kw);
	if(kw<=50){
		cost = 0.53*kw;
	}else{
		cost = 0.53*50+(0.53+0.05)*(kw-50);
	}
	printf("cost = %.2f",cost);
	
	
	return 0;
}

