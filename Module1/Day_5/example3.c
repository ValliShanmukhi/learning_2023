#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter time(H:M:S):");
    scanf("%s",str);
    char *token=strtok(str,":");
    int hours,minutes,secs,totalsec;
    hours=strtol(token,NULL,10);
    token=strtok(NULL,":");
    minutes=strtol(token,NULL,10);
    token=strtok(NULL,":");
    secs=strtol(token,NULL,10);
    totalsec=hours*3600+minutes*60+secs;
    printf("Total seconds:%d",totalsec);
    return 0;
}
