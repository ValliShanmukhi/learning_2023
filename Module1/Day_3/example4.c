#include <stdio.h>
void bigandsmall(int i){
    int small=9;
    int big=0;
    while(i!=0) {
        int num=i%10;
        if (num<small)
            small=num;
        if (num>big)
            big = num;
        i/=10;
    }
    printf("small num =%d and big num=%d\n",small,big);
}
int main()
{
    int i,s;
    printf("\nEnter no.of cases:");
    scanf("%d",&i);
    for(int j=0;j<i;j++){
        printf("\n Enter numbers:");
        scanf("%d",&s);
        if(s>=0 && s<=9){
            printf("\nnot valid");
        }
        else{
            bigandsmall(s);
        }
    }
    
    return 0;
}
