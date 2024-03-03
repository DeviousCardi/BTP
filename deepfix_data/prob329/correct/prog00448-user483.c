#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c); if(c>=a) { if (c>=b) {if (c*c==a*a+b*b) {printf("right tringle"); }
	{if(c*c<a*a+b*b) {printf("not right tringle");}
	else {printf ("cannot from tringle");}
	} } }
	return 0; }