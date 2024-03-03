#include <stdio.h>
#include <stdlib.h>
int main() {
                    int num,i,j,k,m;
                    scanf("%d",&num);
                    i=num;
                    for(j=1;j<=num;j++)
                       {   for(m=1;m<=j;m++)
                       printf(" ");
                       for(k=1;k<=i;k++)
                       printf("*");
                       for(k=num-j;k>=1;k--)
                       printf("*");
                       i--;
                       printf("\n"); }
                       for(j=2;j<=num;j++)
                       {  for(m=num-j+1;m>=1;m--)
                       printf(" ");
                       for(k=1;k<=j;k++)
                       printf("*");
                       for(k=j-1;j>=1;j--)
                       printf("*");
                       printf("\n"); }
	return 0; }