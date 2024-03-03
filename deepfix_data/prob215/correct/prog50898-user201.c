#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s;
	scanf("%d",&n);
	s=0;
	for(i=1;i<n;i++){
	    if((n%i)==0) s=s+1; }
	if(n==s) printf("YES");
	else printf("NO");
	return 0; }