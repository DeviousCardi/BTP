#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e;
	scanf("%d %d %d",&a,&b,&c);
	d=a*a+b*b;
	e=c*c;
	if (a+b>c && b+c>a && c+a>b) {
	   if(d=e) {
	    printf("Right Triangle"); }
	else {
	    printf("Not Right Triangle"); } }
	else {
	    printf("Cannot form a Triangle"); }
	return 0; }