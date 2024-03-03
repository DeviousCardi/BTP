#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,sum=0;
	long n;
	int s[n];
	s[0]=0;
	scanf("%ld",&n);
	for (i=1;i<n;i++) {
	    if (n%i==0)
	    s[i]=i;
	    else
	    s[i]=0; }
	for (i=0;i<n;i++) {
	    sum=sum+s[i]; }
	if (sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }