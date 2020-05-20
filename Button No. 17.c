#include<stdio.h>
#include<string.h>

/*A program that defines a structure employee containing the details such as empno, empname, department name and salary.
The structure has to store 20 employees in an organization. Use the appropriate method to define the above details and
define a function that will display the contents?*/

struct employee
{
	int empage, salary;
	char empname[15];
}e[20];

int main()
{
	int i=0;
	printf("\nEnter details of employees\n");
	while(i<20)
	{
		printf("Enter name: ");
		scanf("%s",e[i].empname);
		printf("\nEnter age: ");
		scanf("%d",&e[i].empage);
		printf("\nEnter salary: ");
		scanf("%d",&e[i].salary);
		++i;
	}
	i=0;
	printf("\n\nDetails of Employees : ");
	printf("\nName     Age    Salary\n");
	while(i<20)
	{
		puts(e[i].empname);
		printf("     %d",e[i].empage);
		printf("     %d",e[i].salary);
		++i;
	}	
	return 0;
}
