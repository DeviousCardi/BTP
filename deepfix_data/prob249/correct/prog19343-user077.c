#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    scanf("%d", &h);
    int i,a,b,c;
    for(i=1;i<=(h+1)/2;i++) {
            if (i==1)
                {for (a=1;a<=(h-1)/2;a++)
                    printf(" ");
                printf("*");}
            else
                {for(b=1;b<=((h+1)/2)-i;b++)
                    printf(" ");
                printf("*");
                for(c=1;c<=i-2;c++)
                    printf(" ");
                printf("*"); }
        printf("\n"); }
    int j,k,l,m;
    for(j=1;j<=(h-3)/2;j++)
        {printf("*");
        for (k=1;k<=j;k++)
            printf(" ");
        printf("*");
        for (l=(h-3)/2-j;l>=1;l--)
            printf(" ");
        printf("*");
        printf("\n"); }
    for(c=1;c<=(h-1)/2;c++)
        printf(" ");
    printf("*");
    return 0; }