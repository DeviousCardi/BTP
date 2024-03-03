#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,temp;
	scanf("%d %d %d",&a,&b,&c);
	if(b>a) {
	    temp=b;
	    b=a;
	    a=temp; }
	if(c>a) {
	    temp=c;
	    c=a;
	    a=temp; }
	if(c>b) {
	    temp=b;
	    b=c;
	    c=temp; }
	if(a==b) {
	    printf("%d",c); }
	else
	print f("%d",b);
	return 0; }