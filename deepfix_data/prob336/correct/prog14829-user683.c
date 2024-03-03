#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,tmp;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a>c) {
	tmp=a;
	a=c;
	c=tmp; }
	else if(b>c) {
	tmp=a;
	a=c;
	c=tmp; }
	if(a+b<=c||b+c<=a||c+a<=b) printf("Cannot form a Triangle");
	else {
	if(a*a+b*b<c*c) printf("Acute Triangle");
	else printf ("Not Acute Triangle"); }
	return 0; }