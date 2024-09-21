#include<stdio.h>
#include<conio.h>
//write below pattern using nested loop.
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15 
void main()
{
int m,n,p=1;
	for(m=1;m<=5;m++)
	{
		for(n=1;n<=m;n++)
		{
			printf("%d ",p);
			p++;
		}
	printf("\n");
    }
}