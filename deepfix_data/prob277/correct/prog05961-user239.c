#include <stdio.h>
#include <stdlib.h>
int main() {
                    int num,i,j,k;
                    scanf("%d",&num);
                    for(i=1;i<=num;i=i+2) {
                          for(j=i;j>=1;j=j-2)
                          printf(" ");
                          for(k=num;k>=i;k--)
                          printf("*");
                          printf("\n"); }
                    for(i=1;i<num;i=i+2)
                    {      for(j=(num+3)/2;j>=i;j--)
                         printf(" ");
                         for(k=i;k<=2*i+1;k++)
                         printf("*");
                         printf("\n"); }
	return 0; }