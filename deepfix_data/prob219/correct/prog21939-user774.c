#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b&&b!=c&&c!=a)
	{if(a<=c) {
	    if(a<=b)
	    printf("%d",b);
	    else
	    printf("%d",a); }
	else {
	    if(c<=b)
	    printf("%d",b);
	    else
	    printf("%d",c); } }
	else if(a==b==c)
	printf("%d",a);
	else if(a==b||b==c||c==a) {
	if(a=b)
	printf("%d",a);
	else if(b=c)
	printf("%d",b);
	else if("%d",c); }
	return 0; }