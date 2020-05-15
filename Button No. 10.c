#include<stdio.h>

int main()
{
	int ch;
	printf("Menu\n\n");
	printf("1. Pizza\n");
	printf("2. Burger\n");
	printf("3. Pasta\n");
	printf("4. French Fries\n");
	printf("5. Sadwich\n");
	printf("Enter your choice:- ");
	scanf("%d",ch);
	switch(ch)
	{
		case 1:
			printf("\n\nItem - Pizza");
			printf("\nPrice - 239");
			break;
		case 2:
			printf("\n\nItem - Burger");
			printf("\nPrice - 129");
			break;
		case 3:
			printf("\n\nItem - Pasta");
			printf("\nPrice - 179");
			break;
		case 4:
			printf("\n\nItem - French Fries");
			printf("\nPrice - 99");
			break;
		case 5:
			printf("\n\nItem -Sadwich ");
			printf("\nPrice - 149");
			break;
		default:
			printf("\n\nError!!!");
			break;	
	}
	return 0;
	}
