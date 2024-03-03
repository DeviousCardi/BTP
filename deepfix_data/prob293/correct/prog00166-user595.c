#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if ((a*a+b*b<c*c||b*b+c*c<a*a||c*c+a*a<b*b)&&a>0&&b>0&&c>0)
	printf("Obtuse Triangle");
	else if(a+b<c||b+c<a||a+c<b)
	printf("Cannot form a Triangle");
	else printf("Not Obtuse Triangle");
	return 0; }