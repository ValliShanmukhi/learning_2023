#include <stdio.h>
void triangle_1(int k){
    for(int h=k;h>=1;h--)
    {
        printf("%d",h);
        
    }
    printf("\n");
    
}

void blank(int u){
    for(int j=1;j<=2*(u-1);j++)
    {
        printf(" ");
    }
    
}

void traingle_2(int m){
    int k=m;
    for(int u=1;u<=m;u++)
    {
        for(int h=m;h>=u;h--)
        {
            printf("%d",m-h+1);
        }
        blank(u);
        triangle_1(k--);
    }
}


int main()
{
    int m;
    printf("enter m value:",m);
    scanf("%d",&m);
    traingle_2(m);
    return 0;
}
