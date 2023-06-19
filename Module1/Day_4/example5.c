#include <stdio.h>

int main()
{
    
    int u,arr[50],n,even=0,odd=0,diff=0;
    printf("enter the length of the array:");
    scanf(" %d",&n);
    for(u=0;u<n;u++)
    {
        scanf("%d",&arr[u]);
    }
    for(u=0;u<n;u++)
    {
         if(u%2==0)
         {
              even=even+arr[u];
         }
         else
         {
             odd=odd+arr[u];
         }
    }
    diff=even-odd;
    printf("\n  Difference between even and odd index numbers in an array:%d",diff);

return 0;
}