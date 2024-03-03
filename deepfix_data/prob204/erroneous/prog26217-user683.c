#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,tmp,r,d;
	scanf("%d", &n);
	tmp=n
	r=0;
	while(tmp>0) {
	    d=tmp%10;
	    r=r*10+d;
	    tmp=tmp/10; }
	printf("%d", r);
	if(r==n) printf("YES");
	else printf("NO");
	return 0; }