#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((c*c)<=((a*a)+(b*b)),((a+c)>b)) {printf("acute triangle");}
	else if((c*c)>=((a*a)+(b*b))) {printf("not acute triangle");}
	else if((a+c)<b) {printf("cannot form a triangle");}
	return 0; }