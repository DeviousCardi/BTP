#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;int b;int c;
	scanf("%d %d %d",&a,&b,&c);
	if (((b*b == a*a + c*c)||(a*a== b*b+c*c)||(c*c== b*b + a*a))&&(b < a+c)) {printf("Right Triangle");}
	else if ((b*b != a*a + c*c)&&(b < a+c)) {printf("Not Right Triangle");}
	else {printf("Cannot form a Triangle");}
	return 0; }