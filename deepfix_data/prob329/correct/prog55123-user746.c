#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if (a==0||b==0||c==0||a+b<=c || a+c<=b || b+c<=a) printf("Cannot form a Triangle");
	if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) printf("Right Triangle");
	else printf("Not Right Triangle");
	return 0; }