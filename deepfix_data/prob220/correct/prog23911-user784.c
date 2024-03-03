#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<(n-1);i++)
    { for(j=0;j<=(2*(n-1));j++) {
           if(((i+j)==(n-1))||((j-n+1)==(i)))
                { printf("*"); }
            else printf(" "); }
      printf("\n"); }
    for(k=0;k<=(2*(n-1));k++)
      printf("*");
	return 0; }