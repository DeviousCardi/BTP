#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,k,n;
     scanf("%d",&n);
     m=(n+1)/2;
  for(i=1;i<=n;i++) {
       for(j=1;j<=m,j++) {
           if((i<=(m+j-1))&&(i>=(m-j-1)))
           printf("%d",j);
           else printf(" "); }
       printf("\n"); }
	return 0; }