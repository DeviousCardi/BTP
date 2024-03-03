#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,b;
    scanf("%d",&h);
    scanf("%d",&b);
    int i,j,k;
    for (i=1;i<=h;i++)
        {printf("*");
        if (i==1||i==h)
            {for (j=1;j<=b-2;j++)
                printf("*");}
        else {for (k=1;k<=b-2;k++)
                printf(" ");}
        printf("*");
        printf("\n");}
        return 0; }