#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c)&&((b+c)>a)&&((a+c)>b)
	{ if ((a*a+b*b)<c*c)or((a*a+c*c)<b*b)or((b*b+c*c)<a*a)
	 printf("Obtuse Triangle");
	 else
	 printf("Not Obtuse Triangle"); }
	 else
	 printf("Cannot form a Triangle")
	return 0; }