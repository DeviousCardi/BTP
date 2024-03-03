#include <stdio.h>
#include <stdlib.h>
int main() {
	int a ;
	int b;
	int c;
	scanf("%d%d%d", &a, &b, &c) ;
	   if (a+b>c&&b+c>a&&c+a>b) {
	       if( (a*a +b*b) == (c*c)||(b*b + c*c) == (a*a)||(a*a + c*c) == (b*b) ) {
	           printf("Right Triangle") ; }
	       else {
	           printf("Not Right Triangle") ; } }
	   else {
	       printf("Cannot form a Triangle") ; }
	return 0; }