#include<stdio.h>
int palin(int);
int main()
{
	int num,check;
	printf("enter the number:");
	scanf("%d",&num);
	check=palin(num);
	if(check==1)
	printf("%d is a palindrome number\n",num);
	else
	("%d is not a palindrome number\n",num);
	return 0;
}

int palin(int i)
{
	int temp,rem,rev=0;
	temp=i;
	while(i!=0)
	{
		rem=i/10;
		rev=rev*10+rem;
		i/=10;
	}
	if(rev==temp)
	return 1;
	else
	return 0;
}
