include <stdio.h>
int main() 
{
    int i,a[100],n,key,found=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
        printf("element found at position %d\n",i+1);
        found=1;
        break;
        }
    }
    if(found == 0)
    {
        printf("not found");
    }
    return 0;
    
}