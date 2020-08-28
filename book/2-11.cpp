#include "stdio.h"
#include "math.h"
int main(void)
{
	double x,y;
	scanf("%lf",&x);
	if(x<0){
		y=pow(x+1,2)+2*x+1/x;
	}else{
		y=sqrt(x);
	}
	printf("%.2f",y);
	
	return 0;
}

