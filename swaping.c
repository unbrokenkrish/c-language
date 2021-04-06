#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enetr value for a & b:");
	scanf("&d,&d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("enter swapping the value of a & b:%d %d",a,b);
	getch();
}