#include<stdio.h>
int main()
{
	FILE *p1;
	char c;
	p1= fopen("student.txt","r");
		while((c=getc(p1))!=EOF)
		{
			putc(c,stdout);
		}
	fclose(p1);
	return 0;
}
