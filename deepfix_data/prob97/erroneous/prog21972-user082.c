#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	scanf("%d",&height);
	int i,j,k,x;
	int n=height;
	for(i=1;i<=n;i++) {
	    x=n-i;
	      for(k=1;k<=i;k++) {
	        for(j=n-i;j>0;j--) {
	            printf("/t"); }
	        printf("%d",(n+k)%10); } }
        printf("\n"); }
	return 0; }