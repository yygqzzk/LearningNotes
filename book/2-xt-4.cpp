#include "stdio.h"
#include "math.h"
int main(void)
{
	int n,i,k=1;
	double total=0,flag=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		total+=(i*flag)/k;
		k+=2;
		flag=-flag;
	}
	printf("%lf",total);
	return 0;
}

