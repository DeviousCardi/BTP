#include <stdio.h>
#include <stdlib.h>
int main() {
                    int num,i,j,k,gap;
                    scanf("%d",&num);
                    for(i=1;i<=num;i=i+2) {
                          for(j=i-2;j>=1;j=j-2)
                          printf(" ");
                          for(k=num;k>=i;k--)
                          printf("*");
                          printf("\n"); }
                    gap=num/2-1;
                    for(i=1;i<=num/2;i++) {
                         for(j=0;j<=gap;j++)
                         printf(" ");
                         gap--;
                         for(k=i;k<=2*i+1;k++)
                         printf("*");
                         printf("\n"); }
	return 0; }