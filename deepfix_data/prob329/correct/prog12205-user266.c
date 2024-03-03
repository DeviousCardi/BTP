#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(!((a+b>c)&&(c+b>a)&&(a+c>b))||a||b||c)
	    printf("Cannot form a triangle");
	else if((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
	    printf("Right Triangle");
	else
	    printf("Not Right Triangle");
	return 0; }