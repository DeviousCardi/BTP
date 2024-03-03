#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,h;
	scanf("%d",&h);
	for(a=0;a<(h-1)/2;a=a+1)
	   {for(b=1;b<=h-2*a;b=b+1)
	       {printf("*"); }
	    printf("\n");
	    for(c=0;c<=a;c=c+1)
	       {printf(" ");}
	    printf("*"); }
	printf("\n");
	for(a=0;a<(h-1)/2;a=a+1)
	   {for(b=1;b<=2*a+3;b=b+1)
	       {printf("*"); }
	    printf("\n");
	    for(b=0;b<=a;b=b+1)
	       {printf(" "); } }
	return 0; }