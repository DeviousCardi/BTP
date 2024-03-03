#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	scanf("%d, %d, %d", &a, &b, &c);
	if((a>b+c)||(b>a+c)||(c>a+b))
	{printf("Cannot form a Triangle");}
	if(((c*c)>(a*a)+(b*b))||((a*a)>(b*b)+(c*c))||((b*b)>(a*a)+(c*c)))
	{printf("Obtuse Triangle");}
	else
	{printf("Not Obtuse Triangle");}
	return 0; }