#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b)&&(b>=c)&&(a>=c)&&(b*b+c*c-a*a>0))
	printf("Acute Triangle");
    else if((b>=a)&&(c>=b)&&(c>=a)&&(b*b+a*a-c*c<=0))
    printf("Not Acute Triangle");
	else if((b>=a)&&(c>=b)&&(c>=a)&&(b+a<=c))
	printf("Cannot form a Triangle");
	return 0; }