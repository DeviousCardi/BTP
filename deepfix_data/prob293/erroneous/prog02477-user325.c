#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b) {
	    if (c>sqrt (a*a+b*b) || b>sqrt(b*b+c*c) || c>sqrt(c*c+a*a)) {
	      printf("Obtuse Angled Triangle"); }
	    else printf ("Not an Obtuse Angled Triangle"); }
	else printf ("Cannot form a Triangle")
	return 0; }