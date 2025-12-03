// write a cprogram to find minimum value by array?

#include<stdio.h>
int main()
{
	int n,i,a[50],min;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("enter value ofa[%d]",i);
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++){
		printf("\nGive value of a[%d]:%d",i,a[i]);
	}
	min=a[0];

	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n minimum valueis:%d",min);
}
