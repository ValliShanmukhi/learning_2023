#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int k;
    printf("enter string:");
    scanf("%[^\n]s",str);

    for(k=0;k<strlen(str);k++){
        if(isupper(str[k])){
            str[k]=tolower(str[k]);
        }
        else if(islower(str[k])){
            str[k]=toupper(str[k]);
        }
    }
    printf("the output string is:%s",str);
    
    return 0;
}