#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,b;
    scanf("%d",&h);
    scanf("%d",&b);
    int i,j,k,l;
    for (i=1;i<=b;i++)
        printf("*");
    printf("\n");
    if (b>1)
        for (j=1;j<=h-2;j++)
            {printf("*");
                    {for (k=1;k<=b-2;k++)
                        printf(" ");}
            printf("*");
            printf("\n"); }
    if (h>1)
        for (l=1;l<=b;l++)
            printf("*");
        return 0; }