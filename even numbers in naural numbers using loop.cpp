//write a c program to even numbers in natural number up to the user want using loop?
#include <stdio.h>
int main()
{
	int i,n,r;
	printf("Enter a nuumber up to u want even numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=i%2;
		if(r==0)
		{
			printf("\t %d",i);
		}
	}
}
