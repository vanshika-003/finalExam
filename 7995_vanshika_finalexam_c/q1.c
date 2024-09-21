#include<stdio.h>
#include<conio.h>
//write a program the factorial of N. using do while loop.
void main()
{
	int n,i=1;
	long factorial=1;
	printf("Enter a num:");
	scanf("%d",&n);
	
	do
	{
		factorial*=1;
		i++;
	}while(i<=n);
	
	printf("Factorial of %d=%d\n",n,factorial);
	
}