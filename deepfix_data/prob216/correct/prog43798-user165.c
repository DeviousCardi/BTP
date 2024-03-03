#include <stdio.h>
#include <stdlib.h>
int main() {
              int a[1000],i,n;
	          scanf("%d",&n);
	          a[1]=0;
	          a[2]=1;
	          for(i=2; i<=n; i++) {
	              a[i]= a[i-1] + a[i-2];
	              a[i-1]=a[i];
	              a[i-2]=a[i-1]; }
	         printf("%d",a[i]);
	return 0; }