#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,m,x,y;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	 m=a;
	else if ((b>c)&&(b>a))
	 m=b;
	else
	 m=c;
		if((a+b<c)&&(a+c<b)&&(b+c<a)) {
	        if((x*x)+(y*y)<(m*m))
	          printf("Acute Triangle");
	        else
	          printf("Not Acute Triangle"); }
	    else
	      printf("Cannot form a Triangle");
	return 0; }