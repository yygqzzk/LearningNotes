#include "stdio.h"
#include "math.h"
int main(void)
{
	int n,i;
	double total;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		total+=sqrt(i);
	}
	
	printf("%lf",total);
	
	return 0;
}

