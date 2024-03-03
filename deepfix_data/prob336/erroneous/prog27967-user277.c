#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a==0)!!(b==0)!!(c==0))
	printf("Cannot form a Triangle");
	else if((a>=b)&&(b>=c)&&(a>=c)&&(b*b+c*c-a*a>0))
	printf("Acute Triangle");
    else if((a>=b)&&(b>=c)&&(a>=c)&&(b*b+c*c-a*a<=0))
    printf("Not Acute Triangle");
	else if((a>=b)&&(b>=c)&&(a>=c)&&(b+c<=a))
	printf("Cannot form a Triangle");
	return 0; }