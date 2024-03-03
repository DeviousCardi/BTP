#include <stdio.h>
#include <stdlib.h>
int main() {
	double n;
	scanf("%lf",&n);
	double i;
	double s=0;
	for(i=1;i<=n/2;i++) {
	    if(int(n)%int(i)==0)
	    s=s+i; }
	if(n==s)
	printf("YES");
	else
	printf("NO");
	return 0; }