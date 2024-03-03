#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,max;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>=b) {
	    if(a>=c)
	    max=a;
	    else
	    max=c; }
	else {
	    if(b>=c)
	    max=b;
	    else
	    max=c; }
	if(max==a) {
	       if(a>=(b+c))
	       printf("Cannot form a Triangle");
	       else if(a*a>(b*b+c*c))
	       printf("Obtuse Triangle");
	       else
	       printf("Not Obtuse Triangle"); }
	else if(max==b) {
	    if(b>=(a+c))
	       printf("Cannot form a Triangle");
	       else if(b*b>(a*a+c*c))
	       printf("Obtuse Triangle");
	       else
	       printf("Not Obtuse Triangle"); }
	else {
	    if(c>=(b+a))
	       printf("Cannot form a Triangle");
	       else if(c*c>(b*b+a*a))
	       printf("Obtuse Triangle");
	       else
	       printf("Not Obtuse Triangle"); }
	return 0; }