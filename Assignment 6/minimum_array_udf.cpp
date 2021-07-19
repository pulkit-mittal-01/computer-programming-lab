#include<stdio.h>
int min(int [], int);
int main()
{
	int p[100],i,n,minimum;
	printf("enter no of element in array:");
	scanf("%d",&n);
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
	{
		printf("p[%d]:",i);
		scanf("%d",&p[i]);
	}
	minimum=min(p,n);
	printf("minimum element in array:%d",minimum);
	return 0;
}

int min(int a[100], int j)
{
	int min,k;
	min=a[0];
	for(k=0;k<j;k++)
	{
		if(min>a[k])
		min=a[k];
	}
	return min;
}
