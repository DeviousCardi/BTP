#include <stdio.h>
#include <stdlib.h>
int main() {
	int a; int b; int c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a)+(b*b)>(c*c)){printf("acute traingle");}
	else if (a*a+b*b<c*c){printf("not acute traingle");}
	else { printf("cannot form a traingle");}
	return 0; }