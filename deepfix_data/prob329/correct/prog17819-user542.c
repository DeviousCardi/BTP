#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b+c)||(b<=a+c)||(c<=a+b)) {
    if(((a*a)==(c*c+b*b))||((b*b)==(a*a+c*c))||((c*c)==(a*a+b*b)))
	printf("Right Triangle");
	else
	printf("Not Right Triangle");
	}else
	printf("Cannot form a Triangle");
	return 0; }