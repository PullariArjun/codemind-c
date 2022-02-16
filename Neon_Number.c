#include<stdio.h>
int main()
{
	int n,i,a,b,sum=0;
	scanf("%d",&n);
	a=n*n;
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	if(sum==n)
	{printf("Neon Number");
	}
	else
	{printf("Not Neon Number");
	}
}