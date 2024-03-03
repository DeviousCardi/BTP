#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,tmp;
	scanf("%d %d %d ",&a,&b,&c);
	if((a>=b && c>=a) || (b>=a && c>=b)) {
	    tmp=a;
	    a=c;
	    c=tmp; }
	else if(b>=a && b>=c) {
	    tmp=a;
	    a=b;
	    b=tmp; }
    if(a>=b+c)
     printf("Cannot form a Triangle");
    else if((a^2)>(b^2+c^2))
     printf("Obtuse Triangle");
    else
	 printf("Not Obtuse Triangle");
	return 0; }