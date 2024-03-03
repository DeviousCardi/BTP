#include <stdio.h>
#include <stdlib.h>
int main() { int a,i,j;
             scanf("%d",&a);
             for(i=1;i<=2*a+1;i++)
             {if (i<=a+1)
                 {for(j=1;j<=i;j++)
                 {if(j%2==0) printf("*");
                 else printf("x");}}
                else { for (j=2*a+1;j>i;j--)
                        {if (j%2==0) printf("*");
                         else printf("x");}}
             printf("\n"); }
	return 0; }