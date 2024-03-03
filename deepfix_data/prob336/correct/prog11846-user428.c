#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d=2;
	scanf("%d%d%d",&a,&b,&c);
	if ((a>=b+c)||(b>=a+c)||(c>=a+b))
	d=0;
	if ((a>=b) && (a>=c)) {
	    if(((b*b+c*c-a*a)/2*b*c)>0)
	    d=1; }
	else if ((b>=a) && (b>=c)) {
	    if(((a*a+c*c-b*b)/2*a*c)>0)
	    d=1; }
	else if ((c>=a) && (c>=a)) {
	    if(((b*b+a*a-c*c)/2*b*a)>0)
	    d=1; }
	if (d==1)
	printf("Acute Triangle");
	else if (d==2)
	printf("Not Acute Triangle");
    else if (d==0)
    printf("Cannot form a triangle");
	return 0; }