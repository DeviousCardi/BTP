#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=c) {
	    if(a<=b)
	    printf("%d",b);
	    else
	    printf("%d",a); }
	else {
	    if(c<=b)
	    printf("%d",b);
	    else
	    printf("%d",c); }
	return 0; }