#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d=a+b+c;
	int e=a*b*c;
    int h=3;
	float f=d/h;
	printf("%d",d);
	printf("%d",e);
	printf("%0.3f",f);
	return 0; }