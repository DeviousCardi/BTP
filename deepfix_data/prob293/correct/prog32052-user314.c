#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	  {  if((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b))
	      printf("Obtuse Triangle");
	  else printf("Not Obtuse Triangle"); }
	 else printf("Cannot form a Triangle");
	return 0; }