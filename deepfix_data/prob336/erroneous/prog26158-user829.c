#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c)
	if((a+b<=c)||(b+c<=a)||(a+c<=b))
	printf("can not from a traingle");
	else if(a^2+b^2>c^2||b^2+c^2>a^2||c^2+a^2>b^2)
	printf("acute traingle");
	else
	printf("not acute traingle");
	return 0; }