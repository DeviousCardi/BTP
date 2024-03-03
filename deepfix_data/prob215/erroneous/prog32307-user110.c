#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum=0;
	int s[n];
	s[0]=0;
	scanf("%d",&n);
	for (i=1;i<n;i++) {
	    if (n%i==0)
	    s[i]=i;
	    else
	    s[i]=0; }
	for (i=0;i<n;j++) {
	    sum=sum+s[i]; }
	if (sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }