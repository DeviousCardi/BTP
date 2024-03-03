#include <stdio.h>
#include <stdlib.h>
int main()
{   int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++)
        { for(j=1;j<=n;j++)
            { if(i+j>=n+1 && j<=i)
                printf("*");
              else
                printf(" "); }
        printf("\n"); }
    for(i=1;i<=(n+1)/2;i++)
        { for(j=1;j<=(n+1)/2;j++)
            { if(i+j>=(n+1)/2 && j>=i)
                printf("*");
              else
                printf(" "); }
        printf("\n"); }
	return 0; }