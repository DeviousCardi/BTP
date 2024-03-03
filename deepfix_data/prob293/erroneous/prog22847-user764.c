#include <stdio.h>
#include <stdlib.h>
int main() {
	int a; int b; int c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b) && (a>=c)){if(a<(b+c)) {if(a*a>b*b+c*c) {printf("Obtuse Triangle");}
	else {printf("Not Obtuse Triangle");}}}
	if((b>=a) && (b>=c)){if(b<(a+c)) {if(b*b>a*a+c*c) {printf("Obtuse Triangle");}
	else {printf("Not Obtuse Triangle");}}}
	if((c>=a) && (c>=b)){if(c<(a+b)) {if(c*c>a*a+b*b) {printf("Obtuse Triangle");}
	else {printf("Not Obtuse Triangle");}}}
	else if((a+b<c)
	return 0; }