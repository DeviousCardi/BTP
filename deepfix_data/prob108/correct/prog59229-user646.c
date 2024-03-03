#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,n;
       scanf("%d",&n);
      for(i=1;i<=n;i++)
     {printf("*");}
     for(j=1;j<=n/2+1;j++)
     {printf(" ");}
      printf("/n");
	return 0; }