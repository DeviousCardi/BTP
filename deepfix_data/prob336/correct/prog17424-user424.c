#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b)){
	    printf("Cannot form a Triangle\n");
	} else if((((a*a)+(b*b))>(c*c))&&(((b*b)+(c*c))>(a*a))&&(((c*c)+(a*a))>(b*b))){
	    printf("Acute Triangle\n");
	} else printf("Not Acute Triangle\n");
	return 0; }