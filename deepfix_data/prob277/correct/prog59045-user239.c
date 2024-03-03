#include <stdio.h>
#include <stdlib.h>
int main() {
                    int num,i,j,k,m;
                    scanf("%d",&num);
                    printf("\n");
                    i=num;
                    for(j=1;j<=num;j=j+1)
                       {   for(m=1;m<=j;m++)
                       printf(" ");
                       for(k=1;k<=i;k++)
                       printf("*");
                       for(k=num-j;k>=1;k--)
                       printf("*");
                       i--;
                       printf("\n"); }
	return 0; }