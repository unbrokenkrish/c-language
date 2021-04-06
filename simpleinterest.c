#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,si,t;
	clrscr();
	printf("enter principal amount,rate of interest,and time to find simple interest:");
	scanf("%d,%d,%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interest=%d",si);
	getch();
	
}