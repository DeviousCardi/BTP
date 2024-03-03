#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,t;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b) {
	    t=a;
	    a=b;
	    b=t; }
	if(b>c) {
	    t=b;
	    b=c;
	    c=t; }
	if(a>b) {
	    t=a;
	    a=b;
	    b=t; }
	if(a==b)
	printf("%d",c);
	else
	printf("%d",b);
	return 0; }