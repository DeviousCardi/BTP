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
	               if(a==b)
	               printf("%d",c);
	               else if(b<c)
	               printf("%d",c);
	               else
	               printf("%d",b);
return 0; }