#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c)||(b+c>c)||(a+c>b)!
	if((a>=b)&&(a>=c)&&(b*b+c*c<a*a))||
	if((b>=a)&&(b>=c)&&(a*a+c*c<b*b))||
	if((c>=a)&&(c>=b)&&(a*a+b*b<c*c))
	   printf("Acute Tringle");
	else
	   print("Not Acute Tringle");
	 else
	   print("Cannot form a Triangle");
	return 0; }