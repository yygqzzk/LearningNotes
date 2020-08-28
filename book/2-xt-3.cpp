#include "stdio.h"
#include "math.h"
int main(void)
{
	int m,n,i;
	double total=0;
	printf("Enter m and n (0<m<=n):\n");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		total+=(i*i+1.0/i);
	}
	printf("%lf",total);
	return 0;
}

