#include<stdio.h>
#include<string.h>
void fun(int m,int arr[]);
int main(){
    int m,arr[50],u;
    printf("enter m value:");
    scanf("%d",&m);
    printf("enter elements in array:");
    for(u=0;u<m;u++){
        scanf("%d",&arr[u]);
    }
    fun(m,arr);
    return 0;
}
void fun(int m,int arr[]){
    int u,k,temp;
    for(u=0;u<m;u++){
        for(k=u+1;k<m;k++){
            if(arr[u]>arr[k]){
                temp=arr[u];
                arr[u]=arr[k];
                arr[k]=temp;
            }

        }
    }
    printf("the min element is:%d\n",arr[0]);
    printf("the max element is:%d\n",arr[m-1]);
}