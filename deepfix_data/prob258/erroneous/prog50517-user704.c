New Note 8
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,j,k;
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++) {
	    scanf("\n%c",&a[i]); }
	for (j=1;j<n-1;j++) {
	    if (a[j]<a[j-1]||a[j]<a[j+1])
		continue;
		else
		{printf("Yes");
		break;} }
	if(j==n-1)
	printf("No");
	return 0; }