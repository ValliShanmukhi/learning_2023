#include <stdio.h>

int main()
{
    
    int u,arr[50],m;
    printf("enter the length of the array:");
    scanf(" %d",&m);
    for(u=0;u<m;u++)
    {
        scanf("%d",&arr[u]);
    }
    printf("input array is:\n");
    for(u=0;u<m;u++)
    {
        printf(" %d",arr[u]);
    }
    printf("\nReverse of an array is:\n");
    for(u=m-1;u>=0;u--)
    {
        printf(" %d",arr[u]);
    }
   
    
return 0;
}
