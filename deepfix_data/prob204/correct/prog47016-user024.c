#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,m;
	int b=0;
	scanf("%d",&n);
	m=n;
	while(n>0){
	    a=(n%10);
	    n=n-a;
	    n=n/10;
	    b=b*10;
	    b=b+a; }
	if(b==m)
	printf("YES");
	else
	printf("NO");
	return 0; }