#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,l,n;
    scanf("%d",&h);
    n=h;
      for(i=1;i<=h;i++) {
              for(j=1;j<n;j++)
               printf(" ");
              for(k=j;k<(2*i-1)+j;k++)
                {    printf("%d",k); }
            printf("\n");
            n=n-1; }
	return 0; }