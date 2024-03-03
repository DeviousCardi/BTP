#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b) {
	if(c>b&&c>a){if((a*a+b*b)<(c*c)){printf("Obtuse Triangle");}
	             else {printf("Not Obtuse Triangle");}}
	if(b>c&&b>a){if((a*a+c*c)<(b*b)){printf("Obtuse Triangle");}
	             else {printf("Not Obtuse Triangle");}}
	if(a>b&&a>c){if((c*c+b*b)<(a*a)){printf("Obtuse Triangle");}
	             else {printf("Not Obtuse Triangle");}} }
	else {printf("Cannot form a triangle");}
	return 0; }