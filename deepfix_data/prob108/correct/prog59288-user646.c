#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,n,k;
       scanf("%d",&n);
    int z=1;
      for(i=1;i<=n;i++) {
         for(k=1;k<=z;k++){
         printf("*"); }
         z=z+1;
         printf("\n"); }
	return 0; }