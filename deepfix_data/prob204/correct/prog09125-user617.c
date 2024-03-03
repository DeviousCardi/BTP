#include <stdio.h>
#include <stdlib.h>
int main() {
	int y,n,z;
	scanf ("%d",&n);
	y=n%10 ;
	z=(n-y)/10;
	y=z;
    (z/10.0==0);
	  if (n==z)
	     printf("YES");
	  else
	     printf("NO");
	return 0; }