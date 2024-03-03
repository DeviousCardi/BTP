#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a*a+b*b>c*c){printf("Acute Triangle");}
	else if(a*a+b*b<c*c){printf("Not Acute Triangle");}
	else if(a+b<c){printf("Cannot form a triangle");}
	return 0; }