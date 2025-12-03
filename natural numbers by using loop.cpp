// write a c program to print natural numbers by asking user?
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number upto u want numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    printf("\t%d",i);	
	}
}
