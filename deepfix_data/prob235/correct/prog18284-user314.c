#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,n,m;
     scanf("%d",&n);
     m=(n+1)/2;
  for(i=1;i<=n;i++) {
       for(j=1;j<=n;j++) {
           if((i+j<m)||(i-j>=m))
                printf(" ");
            else if((i+j<=(n+m))&&(j-i>=m))
                printf("%d",j); }
       printf("\n"); }
	return 0; }