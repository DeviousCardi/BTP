#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>=b)&&(a>=c)&&(b+c>a))
	if((b>=c)&&(b>=a)&&(a+c>b))
	if((c>=a)&&(c>=b)&&(a+b>c)) {
        if((a>=b)&&(a>=c)&&(b*b+c*c<a*a))
    	if((b>=a)&&(b>=c)&&(a*a+c*c<b*b))
	    if((c>=a)&&(c>=b)&&(a*a+b*b<c*c))
	       printf("Acute Tringle");
    	else
	      printf("Not Acute Tringle"); }
   else
	   printf("Cannot form a Triangle");
	return 0; }