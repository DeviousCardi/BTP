#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(c<b))
	{printf("%d",b); }
	else  ((b<a)&&(a>c))
  {	printf("%d",a); }
	else  ((c>b) &&(c>a))
  { printf ("%d",c); }
	return 0; }