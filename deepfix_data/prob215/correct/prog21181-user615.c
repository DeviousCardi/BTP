#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++) {
	    if(n%i==0)
	    s=s+i+(n/i);
	    printf("%d\n",s); }
	s=s-n;
	if(s==n)
	printf("Yes");
	else printf("No");
	return 0; }