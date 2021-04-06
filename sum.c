#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s;
	clrscr();
	printf("enter two numbers:");
	sacnf("%d,%d",&a,&b);
	s=a+b;
	printf("sum=%d",s);
	getch();
}