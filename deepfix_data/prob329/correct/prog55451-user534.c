#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,f,g,h,i;
	scanf("%d %d %d",&a,&b,&c);
	d=a*a+b*b;
	e=c*c;
	f=b*b+c*c;
	g=a*a;
	h=c*c+a*a;
	i=b*b;
	if(a+b>c && b+c>a && c+a>b) {
	    if(d==e || f==g || h==i) {
	        printf("Right Triangle"); }
	    else {
	       printf("Not Right Triangle"); } }
	else {
	    printf("Cannot form a triangle"); }
	return 0; }