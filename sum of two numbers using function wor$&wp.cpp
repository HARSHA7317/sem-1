// write c program to print sum of two numbers using function with out return type & with parameters? 
#include <stdio.h>
void add(int a,int b){
	printf("sum of %d+%d=%d",a,b,a+b);
}
int main(){
	int sum=0,a=5,b=6;
	add(a,b);

	return 0;
	
}
