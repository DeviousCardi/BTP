#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(((a+b-c)!>0)||((a+c-b)!>0)||((b+c-a)!>0))
	  { printf("\nCannot form a Triangle");
	    return 0;}
	else
	  { if(((a*a + b*b - c*c) ==0)||((a*a + c*c - b*b)==0)||((b*b + c*c - a*a)==0))
	    printf("\nRight Traingle");
	    else printf("\nNot Right Traingle"); }
	return 0; }