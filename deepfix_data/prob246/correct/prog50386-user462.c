#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int s,p;
	float Av;
	s=a+b+c;
	p=a*b*c;
	Av=(a+b+c)/3;
	printf("%d\n%d\n%f",s,p,Av);
	return 0; }