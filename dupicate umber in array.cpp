//write a c program to print duplicate elements in array?

#include<stdio.h>
int main()
{
	int i,j,n,a[100],k=0;
	printf("ENTER N VALUE:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	printf("enter value of a[%d]:",i);
	scanf("%d",&a[i]);
}	for(i=0;i<n;i++)
{
	printf("\nvalue of a[%d]:%d",i,a[i]);
}
	
  for(i=0;i<n;i++){
  	
  	for(j=i+1;j<n;j++)
  	{
  		if(a[i]==a[j])
  		{
  			printf("\nduplicate number is %d",a[i]);
  			k=k+1;
    	}
	  }
  } if(k==0)
  printf("\nno duplicate numbers");
  			}
