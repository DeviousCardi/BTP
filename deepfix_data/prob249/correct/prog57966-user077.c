#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    scanf("%d",&h);
    int i,j,k;
    for (i=h;i>=2;i--)
        {printf("*");
        if (i==h)
            for (j=1;j<=i-2;j++)
                printf ("*");
        else {for (k=1;k<=i-2;i++)
            printf(" ");}
        printf("*");
        printf("\n");}
    printf("*");
        return 0; }