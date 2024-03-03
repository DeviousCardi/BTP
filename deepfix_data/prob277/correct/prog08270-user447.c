#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,h;
	scanf("%d",&h);
	for(a=0;a<(h-1)/2;a=a+1)
	   {for(b=1;b<=h-3*a;b=b+1)
	       {printf("*"); }
	    printf("\n");
	    for(b=0;b<=a;b=b+1)
	       {printf(" ");}
	    printf("*"); }
	return 0; }