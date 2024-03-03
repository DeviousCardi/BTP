#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if ((a*a +b*b -c*c)/2*a*b < 0 && (a*a +b*b -c*c)/2*a*b > -1) {printf("Obtuse Triangle");}
	else if ((a*a +b*b -c*c)/2*a*b < 0 && (a*a +b*b -c*c)/2*a*b > -1) { printf("Obtuse Triangle");}
	else {printf("Cannot form a Triangle");}
	return 0; }