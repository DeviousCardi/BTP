#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,x,y,z;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b)) {
	    if((a>=b)&&(a>=c))
	    x=a,y=b,z=c;
	    else if((b>=c)&&(b>=a))
	     { x=b,y=a,z=c;}
	    else {
	        x=c,y=a, z=b; }
	    if ((y*y+z*z>x*x)) {
	    printf("Acute Triangle"); }
	    else
	       { printf("Not Acute Triangle");} }
	    else {
	        printf("Cannot form a Triangle"); }
	return 0; }