
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int j,n=0;
    printf("enter string:");
    scanf("%[^\n]s",str);
    for(j=0;j<strlen(str);j++){
        n=n*10+(str[j]-48);

    }
    printf("the number is:%d",n);
    return 0;
}