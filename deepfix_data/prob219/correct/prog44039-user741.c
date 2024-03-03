#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,tmp;
	scanf("%d %d %d ",&a,&b,&c);
	if(a>c) {
	    tmp=a;
	    a=c;
	    c=tmp; }
	if(b>c) {
	    tmp=b;
	    b=c;
	    c=tmp; }
	if(b>a) printf("%d",b);
	else printf("%d",a);
	return 0; }