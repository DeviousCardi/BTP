#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c); if(c>=a) { if (c>=b) {if (c*c==a*a+b*b) { printf("Right Tringle"); }
	{if(c*c<a*a+b*b) { printf("Not Right Tringle");}
	} }  }
	else { printf("Cannot form Tringle"); }
	return 0; }