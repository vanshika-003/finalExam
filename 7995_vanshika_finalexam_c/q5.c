#include<stdio.h>
#include<conio.h>
//write a c program to find the largest element in an array.
void main()
{
int n,p,max;
int array[100];
printf("Enter the number of element max 100:");
scanf("%d",&n);
printf("Enter the element:");
for(p=1;p<n;p++);
{
	scanf("%d",&array[100]);
}
max=array[0];
for(p=1;p<n;p++)
{
	if(array[p]>max)
	{
		max = array[p];
	}
}

	printf("Largest element %d",max);


}