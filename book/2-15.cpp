#include "stdio.h"
int main(void)
{
	int n,i,flag,d;
	double sum=0.0;
	scanf("%d",&n);
	flag=1;
	sum=0;
	d=1; 
	for(i=1;i<=n;i++){
		sum+=flag*(1.0/d);
		d+=3;
		flag=-flag;
	}
	printf("%.2f",sum);
	return 0;
}

