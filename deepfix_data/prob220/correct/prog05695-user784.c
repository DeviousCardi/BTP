#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,k, l;
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
    { for(k=n-1; k>i; k--)
       printf(" ");
      printf("*");
      for(l=1; l<2*i+1; l++)
       printf(" ");
      if(i>0)
      { printf("*"); }
      printf("\n"); }
    for(i=1; i<=2*n-1; i++)
     printf("*");
	return 0; }