#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b) {
	    if (b>c)
	    printf("%d",b);
	    else if ((c>b)&&(a>c))
	    printf("%d",c);
	    else if ((c>b)&&(a<c))
	    printf("%d",a);
	else if (a<b)
	  {  if ((c<a)&&(c<b))
	    printf("%d",a);
	    else if ((a<c)&&(c<b))
	    printf("%d",c);
	    else if ((b==c)||(c==a))
	    printf("%d",a);}
	else {
	    if ((a==b)&&(a<c))
	    printf("%d",a);
	    else if ((a==b)&&(a>c))
	    printf("%d",c);}
	return 0;
}}