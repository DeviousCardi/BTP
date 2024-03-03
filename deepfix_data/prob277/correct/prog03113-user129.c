#include <stdio.h>
#include <stdlib.h>
int main() {
	int space,star,n,i,j;
	space=0;star=n;n=n;
	for(i=0;i<(n+1)/2;i++) {
        for(j=0;j<space;j++)
        printf(" ");
        for(j=0;j<star;j++)
        printf("*/n");
        n=n-2;
        space=space+1; }
    for(i=0;i<(n-1)/2;i++)
    star=3; space=(n-1)/2; {
        for(i=0;i<(n+1)/2;i++)
      for (j=0;j<space;j++)
        printf(" ");
        for(j=0;j<star;j++)
        printf("*/n");
        n=n+2, space=space-1; }
	return 0; }