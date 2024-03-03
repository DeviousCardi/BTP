#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a,b,c,d;
	       scanf("%d%d%d",&a,&b,&c);
	               if(a<b) {
	                   d=b;
	                   b=a;
	                   a=d; }
	               if(c>a) {
	                   d=c;
	                   c=a;
	                   a=d; }
	               printf("%d",d);
return 0; }