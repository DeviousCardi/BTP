#include <stdio.h>
#include <stdlib.h>
    int main() {
    int a; int b; int c;
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b<=c))&&((b+c<=a))&&((c+a)<=b)) {
	    printf("Cannot form a Triangle"); }
	if(((a*a+b*b)<c*c) ||((b*b+c*c)<a*a)||((c*c+a*a)<b*b)) {
	    printf("Obtuse Triangle"); }
	else if(a*a+b*b>=c*c&&b*b+c*c>=a*a&&c*c+a*a>=b*b) {
	    printf("Not Obtuse Triangle "); }
	return 0; }