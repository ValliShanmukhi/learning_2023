#include <stdio.h>

int main()
{
    
    int u,arr[50],m,even=0,odd=0,diff=0;
    printf("enter the length of the array:");
    scanf(" %d",&m);
    for(u=0;u<m;u++)
    {
        scanf("%d",&arr[u]);
    }
    for(u=0;u<m;u++)
    {
         if(arr[u]%2==0)
         {
              even=even+arr[u];
         }
         else
         {
             odd=odd+arr[u];
         }
    }

    diff=even-odd;
    printf("\n  Difference between even and odd numbers in an array:%d",diff);

return 0;
}


