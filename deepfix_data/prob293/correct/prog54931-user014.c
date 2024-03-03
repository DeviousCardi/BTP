#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d,%d,%d", &a,&b,&c);
	if((c<(a+b))&&(b<(a+c))&&(a<(b+c))) {
	 if(((a*a+b*b)<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
	    printf("Obtuse Triangle");
	 else
	    printf("Not Obtuse"); }
	else
	    printf("Cannot form a Triangle");
	return 0; }