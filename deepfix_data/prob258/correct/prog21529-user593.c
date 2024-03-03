#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n,m,j=0;
	scanf("%d\n",&n);
		int x[20];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&x[i]); }
	m=x[0];
	for(i=1;i<n;i++) {
	    if(x[i]>m )
	       m=x[i]; }
	 if(j==n)
	    printf("Yes\n");
	    else {
	    printf("No\n"); }
	return 0; }