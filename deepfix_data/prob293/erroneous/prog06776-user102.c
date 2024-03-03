#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c,x,y,z;
if (a>=c && a>=b)
x=a; y=b;z=c;
else if (b>=c && b>=a)
x=b; y=a;z=c;
else if (c>=a && c>=b)
x=c; y=a;z=c;
 else if { (y+z<=x)
printf("Cannot form a Triangle");
else if((y*y+z*z)<(x*x))
printf("Obtuse triangle");
else
printf("Not Obtuse triangle");
return 0; }