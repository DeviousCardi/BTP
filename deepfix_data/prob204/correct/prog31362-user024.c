#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,b=0;
	scanf("%d",&n);
	while(n>0){
	    a=(n%10);
	    n=n-a;
	    n=n/10;
	    b=b*10;
	    b=b+a; }
	if(b==n)
	printf("YES");
	else
	printf("NO");
	return 0; }