#include <stdio.h>
#include <stdlib.h>
int main() {
	char a, b, c;
 scanf(" %c %c %c", &a, &b, &c ) ;
 if (a+b>c && b+c>a && c+a>b) {
	    if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+ a*a== b*b) ) printf (" Right Triangle");
	else printf("Cannot form a Triangle"); }
else	  printf ("Not right Triangle");
	return 0; }