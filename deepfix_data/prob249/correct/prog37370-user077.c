#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    scanf("%d",&h);
    int i,j,k;
    for (i=h;i>=2;i--)
        {printf("*");
            for (j=1;j<=i-2;j++)
                {if (i==h)
                    printf ("*");
                else
                    printf(" ");}
        printf("*");
        printf("\n");}
    printf("*");
        return 0; }