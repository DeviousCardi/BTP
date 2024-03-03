#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a=0;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
		if(s[0]>s[1])
	printf("Yes");
	for(i=1;i<n;i++) {
	    if((s[i]>s[i-1]) && (s[i]>s[i+1]))
	    a++; }
	if(a!=0)
	printf("Yes");
	else printf("No");
	return 0; }