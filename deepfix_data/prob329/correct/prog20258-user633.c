#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	int square;
	int max;
	scanf("%d%d%d",&a,&b,&c);
	square=a*a+b*b+c*c;
	if(a>b)
	  {if(a>c)
	      max=a; }
	else{
	     if(b>c)
	       max=b;
	else
	     max=c; }
	if((2*max*max)==square)
	   printf("Right Triangle");
	else if((a+b>c)&&(b+c>a)&&(a+c>b))
	   printf("Not Right Triangle");
	else
	   printf("Cannot form a Triangle");
    return 0; }