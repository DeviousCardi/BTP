#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a,b,c;
	       int d;
	       scanf("%d%d%d",&a,&b,&c);
	               if(a>b) {
	                   if(a>c)
	                   d=a;
	                   else
	                   d=c; }
	               else {
	                   if(c>b)
	                   d=c;
	                   else
	                   d=b; }
return 0; }