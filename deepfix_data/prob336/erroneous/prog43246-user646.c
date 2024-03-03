#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,x,y,z;
	scanf("%d%d%d",a&b&c&);
	if{(a>=b&&a>=c)
	a=x,b=y,c=z;
	else if(b>=a&&b>=c)
	b=x,a=y,c=z;
	else if(c>=a&&c>=b)
	c=x,b=y,a=z;}
	if(!(a+b>=c&&b+c>=a&&c+a>=b))
	printf("Cannot form a Triangle");
	else if(x*x<y*y+z*z)
	printf("Acute Triangle");
	else
	printf ("Not Acute Triangle");
	return 0; }