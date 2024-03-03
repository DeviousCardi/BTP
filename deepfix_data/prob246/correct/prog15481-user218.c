#include <stdio.h>
int main() {
	int a,b,c,s,p;
	float av;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=a+b+c;
	printf("%d\n",s);
	p=a*b*c;
	printf("%d\n",c);
	av=s/3.0;
	printf("%f",av);
	return 0; }