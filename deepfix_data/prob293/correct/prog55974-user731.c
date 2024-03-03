#include <stdio.h>
#include <stdlib.h>
int main() {
		int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int x,y,z;
if((a+b<=c)||(b+c<=a)||(a+c<=b)) {
    printf("Cannot form a Triangle"); }
else if ((a>=b)&&(a>=c)) {
	   x=a; y=b; z=c; }
	else if ((b>=c)&&(b>=a)) {
	    x=b; y=a; z=c; }
	else x=c;y=b; z=a;
	if((x*x)>(y*y)+(z*z)) {
	    printf("Obtuse Triangle"); }
	else printf("Not Obtuse Triangle");
	return 0; }