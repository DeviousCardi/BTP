#include <stdio.h>
int main() {
	int a,b,c;
	int s,p;
	float av;
	scanf("%d %d %d",&a,&b,&c);
	s=a+b+c;
	p=a*b*c;
	av=(a+b+c)/3;
	printf("%d\n%d\n%.3f",s,p,av);
	return 0; }