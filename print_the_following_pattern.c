#include<stdio.h>
int main()
{
	int r,i,j;
	scanf("%d",&r);
	int arr[r][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				printf("0");
		    }
			else
			{
				printf("x");
			}
		}
		printf("
");    
	}
}