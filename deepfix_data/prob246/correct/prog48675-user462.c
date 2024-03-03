#include <stdio.h>
int main() {
	int a,b,c;
	int s,p;
	float Av;
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
	p=a*b*c;
	Av=(a+b+c)/3.0;
	printf("%d\n%d\n%0.3f",s,p,Av);
	return 0; }