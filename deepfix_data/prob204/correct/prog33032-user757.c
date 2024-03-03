#include <stdio.h>
#include <stdlib.h>
int main() {
	int num,a,b,c;
	scanf("%d",num);
	c=0;
	a=num;
	while(a!=0) {
	    b=a%10;
	    a=a/10;
	    c=10*c+b; }
	if(num==c)
	    printf("YES");
	else
	    printf("NO");
	return 0; }