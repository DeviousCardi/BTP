#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c,z,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b)
	    if (a<c&&c<b)
	    printf("%d",c);
	    else if (a<c&&b<c)
	    printf("%d",b);
	    else printf("%d",a);
	else
	    if(b<c)
	    printf("%d",c);
	    else
	    printf("%d",b);
	return 0; }