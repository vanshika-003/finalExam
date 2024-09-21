#include<stdio.h>
#include<conio.h>
//write a program find a max number from 3 number.
void main()
{
int num1,num2,num3;

printf("Enter num1:");
scanf("%d",&num1);
printf("Enter num2:");
scanf("%d",&num2);
printf("Enter num3:");
scanf("%d",&num3);

if(num1<num2)
{
	if(num1<num3)
	{
		printf("%d is the smallest number",num1);
	}
	else 
	{
		printf("%d is the smallest number",num3);
	}
	}	
	else
	{
		if(num2<num3)
		{
		printf("%d is the smallest number",num2);	
		}
		else
		{
			printf("%d is the smallest number",num3);
		}
	}
}