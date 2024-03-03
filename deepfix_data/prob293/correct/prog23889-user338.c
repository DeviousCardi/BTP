#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(c>=(a+b) || a>=(b+c) || b>=(a+c))
	  printf("Cannot form a Triangle");
	else if(a*a+b*b<c*c || b*b+c*c<a*a || a*a+c*c<b*b)
	  printf("Obtuse Triangle");
	else{printf("Not Obtuse Triangle");}
	return 0; }