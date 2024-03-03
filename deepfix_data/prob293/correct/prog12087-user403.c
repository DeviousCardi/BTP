#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
	    if ((a*a>b*b+c*c)||(a*a+b*b<c*c)||(a*a+c*c<b*b))
	                    {printf("obtuse");}
	    else {printf("Not Obtuse"); }
            {printf(" triangle");}}
	else {printf("cannot form a triangle");}
	return 0; }