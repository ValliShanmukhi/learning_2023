#include <stdio.h>

int main() {
   
   
      int arr[50],u,m,s=0;
      float avg=0;
      printf("enter m:");
      scanf("%d",&m);
      for(u=0;u<m;u++)
      {
          scanf("%d",&arr[u]);
      }
      for(u=0;u<m;u++)
      {
          s=s+arr[u];
      }
    
      printf("sum of elements in array:%d\n",s);
      printf("average :%.2f",avg=s/m);

    return 0;
}