#include "stdio.h"
int main(void)
{	
	int n,i;
	double sum=0.0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("%.2f",sum);
	return 0;
}

