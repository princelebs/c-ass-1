#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,choice;
	clrscr();
	printf("\nenter one number :");
	scanf("%d",&x);
	printf("enter second number :");
	scanf("%d",&y);
	printf("\n1. ADDITION");
	printf("\n2. SUBSTRACTION");
	printf("\n3. MULTIPLISATION");
	printf("\n4. DIVISION");
	printf("\nenter your Choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("ADDITION=%d",x+y);
			break;
		case 2:
			printf("SUBSTRACTION=%d",x-y);
			break;
		case 3:
			printf("MULTIPLISATION=%d",x*y);
			break;
	      default:
			printf("DIVISION=%.2f",x/y);
			break;

	  }

		getch();
}







