#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c); if(c>=a) { if (c>=b) {if (c*c==a*a+b*b) { printf("right tringle"); }
	{if(c*c<a*a+b*b) {printf("Not Right tringle");}
	} }  }
	else {printf ("cannot from tringle");}
if (a>=b) { if (a>=c) {if (a*a==b*b+c*c) { printf("right tringle"); } {
  if (a*a<b*b+c*c) {printf("not right tringle");}
} } }
else { printf("cannot form tringle"); }
if (b>=c) {if (b>=a) {if (b*b==a*a+c*c) { printf("right tringle"); } {
    if (b*b<a*a+c*c) { printf("not right tringle"); }
} } }
else { printf("cannot form tringle"); }
	return 0; }