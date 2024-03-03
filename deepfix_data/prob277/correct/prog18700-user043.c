#include <stdio.h>
#include <stdlib.h>
int main() {
             int i,j,n,x;
             scanf("%d",&n);
             x=n;
             for(i=1;i<=(n+1)/2;i++)
             {for(j=1;j<i;j++)
               printf(" ");
              for(;j<=x;j++)
               printf("*");
               printf("\n");
              x--; }
             for(i=(n-1)/2;i>=1;i--)
             {for(j=1;j<i;j++)
               printf(" ");
              for(;j<=n-i+1;j++)
               printf("*");
               printf("\n");
              x--; }
	return 0; }