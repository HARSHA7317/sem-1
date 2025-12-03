// write a c program to sort in increasing order by bubble sort using array? 
#include<stdio.h>
int main()
{
    int a[100], temp, i, j, n;
    printf("Enter value of n:");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {  printf("value of a[%d]:",i);
        scanf("%d", &a[i]);
    }
      
	   printf("BEFORE SORT\n");
	for(i = 0; i < n; i++)
    { 
	 printf("valueof a[%d]:%d\n",i,a[i]);
}
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)  
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("AFTER SORT\n");
    for(i = 0; i < n; i++)
    {
        printf("value of a[%d]is:%d\n",i,a[i]);
    }
    return 0;
    
	
}


	

