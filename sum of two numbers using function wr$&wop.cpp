// write c program to print sum of two numbers using function with return type & with out parameters? 
#include <stdio.h>
int add(){
	int a=5,b=7;
	return a+b;
}
int main(){
	int sum;
	sum=add();
	printf("sum is %d",sum);
	return 0;
	
}
