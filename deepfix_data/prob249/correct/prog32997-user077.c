#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,b;
    scanf("%d",&h);
    scanf("%d",&b);
    int i,j,k,l;
    for (i=1;i<=h;i++)
        printf("*");
    printf("\n");
    if (b>1)
        for (j=1;j<=b-2;j++)
            {printf("*");
                if (b>2)
                    {for (k=1;k<=b-2;k++)
                        printf(" ");}
            printf("*");
            printf("\n"); }
    for (l=1;l<=b;l++)
        printf("*");
        return 0; }