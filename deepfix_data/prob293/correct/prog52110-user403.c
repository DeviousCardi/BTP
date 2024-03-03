#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
	    if ((a*a>b*b+c*c)||(a*a+b*b<c*c)||(a*a+c*c<b*b))
	                    {printf("Obtuse");}
	    else {printf("Not Obtuse"); }
            {printf(" Triangle");}}
	else {printf("Cannot form a Triangle");}
	return 0; }