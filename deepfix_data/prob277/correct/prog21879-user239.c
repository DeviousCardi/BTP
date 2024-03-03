#include <stdio.h>
#include <stdlib.h>
int main() {
                    int n,i,j,k;
                    scanf("%d",&n);
                    for(i=1;i<=n;i=i+2) {
                          for(j=i;j>=i;j=j-2)
                          printf(" ");
                          for(k=n;k>i;k--)
                          printf("*");
                          printf("/n"); }
	return 0; }