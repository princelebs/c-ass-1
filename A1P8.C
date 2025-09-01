#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("enter num1 ;");
	scanf("%d",&x);
	printf("enter num2 ;");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n%d",x);
	printf("\n%d",y);

	getch();
}