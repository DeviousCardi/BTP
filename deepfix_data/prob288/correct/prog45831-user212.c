#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() { int a,i,j;
             scanf("%d",&a);
             for(i=1;i<=2*a+1;i++)
             {if (i<=a+1)
                 {for(j=1;j<=i;j++)
                 {if(j%2==1) printf("x");
                 else printf("*");}}
                else { for (j=2*a+1;j>=i;j--)
                        {if (j%2==1) printf("x");
                         else printf("*");}}
             printf("\n"); }
	return 0; }