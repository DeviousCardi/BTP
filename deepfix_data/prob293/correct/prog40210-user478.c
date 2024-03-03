#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b)){printf("Obtuse Triangle");}
	else if((a*a+b*b>=c*c)||(b*b+c*c>=a*a)||(a*a+c*c>=b*b)||(a==0)||(b==0)||(c==0)){printf("Not Obtuse Triangle");}
	else {
	    printf("Cannot form a Triangle"); }
	return 0; }