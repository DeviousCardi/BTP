#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,n;
       scanf("%d",&n);
      for(i=1;i<=2*n-1;i+2)
      {printf("*"); }
      for(j=1;j<=2*n-1;j+2)
    {printf(" ");}
      printf("\n");
	return 0; }