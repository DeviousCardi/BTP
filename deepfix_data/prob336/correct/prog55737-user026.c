#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	float cosa;
	float cosb;
	float cosc;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	cosa=((c*c)+(b*b)-(a*a))*1.0/(2*b*c);
	cosb=((c*c)-(b*b)+(a*a))*1.0/(2*a*c);
	cosc=((b*b)+(a*a)-(c*c))*1.0/(2*b*a);
	if(( (a+b)>c) && ((c+b)>a) && ((a+c)>b)) {
	if(cosa<0 || cosb<0 || cosc<0)
	printf("Not Acute Triangle");
	else
	printf("Acute triangle"); }
	else
	printf("Cannot form a Triangle");
	return 0; }