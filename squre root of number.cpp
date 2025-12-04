// write a c program to find squre root of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float sq;
	printf("Enter a number");
	scanf("%d",&n);
	sq=sqrt(n);
	printf("the squre root of %d is %nf",n,sq);
}
