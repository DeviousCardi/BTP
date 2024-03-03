#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int s=a+b+c;
	int p=a*b*c;
	float v=(a+b+c)/3.0;
	printf("%d\n%d\n%.3f",s,p,v);
	return 0; }