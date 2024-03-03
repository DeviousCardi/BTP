#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,h,b;
    scanf("%d",&h);
    scanf("%d",&b);
    for (i=1;i<=h;i++)
        printf("*");
    printf("\n");
    for (j=1;j<=b;j++)
        {printf("*");
        if (b>2)
            for (k=1;k<=b-2;k++)
                printf(" ");
        printf ("*");
        printf("\n"); }
    printf("\n");
    for (l=1;l<=h;l++)
        printf("*");
        return 0; }