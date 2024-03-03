#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d=a+b+c;
	int e=a*b*c;
    float f=d/3.0;
	printf("%d",d);
	printf("\n%d",e);
	printf("\n%0.3f",f);
	return 0; }