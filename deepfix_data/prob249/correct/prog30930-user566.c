#include <stdio.h>
#include <stdlib.h>
int main() {
      int n,i,j;
      scanf("%d",&n);
      for(i=1;i<=n;i++) {
          for(j=0;j<=n%2;j++) {
              printf(" "); }
          printf("*");
          for(j=1;j<i-1;j++) {
              printf(" "); }
          printf("*"); }
	return 0; }