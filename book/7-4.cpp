#include <stdio.h>
int main(){
	int a[20],b[20],c[40],i,j,n,m,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++){	//找出数组a在在数组b中不存在的 
		for(j=0;j<m;j++)
			if(a[i]==b[j])
				break;
		if (j==m)
			c[num++]=a[i];//存储在数组c 
	}
	for(i=0;i<m;i++){	//找出数组b在在数组a中不存在的 
		for(j=0;j<n;j++)
			if(b[i]==a[j])
				break;
		if (j==n)
			c[num++]=b[i];
	}
    for(i=0;i<num;i++){
        printf("%d ",c[i]);
    }






    return 0;
}
