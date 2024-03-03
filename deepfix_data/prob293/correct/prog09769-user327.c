#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if((a+b>c)&&(b+c>a)&&(c+a>b)) {
	        if((b*b+c*c<a*a)||(b*b+a*a<c*c)||(a*a+c*c<b*b))
	        printf("Obtuse Traingle");
	        else printf("Not Obtuse Triangle"); }
	   else printf("Cannot form a Triangle");
	return 0; }