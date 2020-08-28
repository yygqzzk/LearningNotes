#include "stdio.h"
int fact(int n);
int main(void)
{
	int n,i,e=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		e+=fact(i);
	}
	printf("%d",e);
	return 0;
}
int fact(int n)
{
	int result=1,i;	
	for(i=1;i<=n;i++){
		result*=i;
	}
	return result;
}

