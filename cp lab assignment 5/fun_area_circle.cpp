#include<stdio.h>
int area(int );
int cir(int );
#define pi (3.14)
int main()
{
	int r,Ans,result;
	printf("enter radius:");
	scanf("%d",&r);
	Ans=area(r);
	printf("Area of circle:%d\n",Ans);
	result=cir(r);
	printf("circumference of circle:%d",result);
	
	return 0;
}

int area(int a)
{
	int c;
	c=pi*a*a;

	return(c);
}
int cir(int a)
{
	int c;
	c=2*pi*a;
	return(c);
}

