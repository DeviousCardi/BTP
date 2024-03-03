#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,h,b;
    scanf("%d",&h);
    scanf("%d",&b);
    for (i=1;i<=h;i++)
        printf("*");
    printf("\n");
    for (j=1;j<=b;j++)
        {printf(" ");
        for (k=1;k<=b-2;k++)
            printf(" ");
        printf ("*");}
    for (i=1;i<=h;i++)
        printf("*");
        return 0; }