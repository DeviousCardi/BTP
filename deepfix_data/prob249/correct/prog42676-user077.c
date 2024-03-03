#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    scanf("%d",&h);
    int i,j,a,b;
    printf("*");
    for (i=1;i<=(h+1)/2;i++)
        {printf("*");
            for (j=1;j<=i-2;j++)
                printf(" ");
        printf("*"); }
    for (a=(h-1)/2;a>=2;a--)
        {printf("*");
            for (b=1;j<=a-2;b++)
                printf(" ");
        printf("*"); }
    printf("*");
        return 0; }