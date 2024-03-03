#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if ( a + b <= c) {printf("Cannot form a Triangle");}
	else if (a*a + b*b - c*c < 0 && a*a + b*b - c*c < 2*a*b) {printf("Obtuse Triangle");}
	else if (a*a +b*b - c*c > 0 && a*a + b*b - c*c < 2*a*b) { printf("Not Obtuse Triangle");}
	else if ( a*a + b*b == c*c) { printf("Not Obtuse Triangle");}
	else {printf("Cannot form a Triangle");}
	return 0; }