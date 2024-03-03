#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
  int p=(n-1)/2 +1;
  for(i=1;i<=p;i++) {
      for(j=(p-i +1);j<=p;j++) {
          printf("%d",j); }
      printf("\n"); }
	return 0; }