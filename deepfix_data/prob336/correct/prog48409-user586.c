#include <stdio.h>
#include <math.h>
int main() {
	int a;int b;int c;
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)>c)&&((a*a+b*b)>(c*c))) {printf("acute triangle");}
	else if(((a+b)>c)&&((a*a+b*b)<(c*c))) {printf("not acute triangle");}
	else if((a+b)<c) {printf("cannot form a triangle");}
	else if(((b+c)>a)&&((b*b+c*c)>(a*a))) {printf("acute triangle");}
	else if(((b+c)>a)&&((b*b+c*c)<(a*a))) {printf("not acute triangle");}
	else if((b+c)<a) {printf("cannot form a triangle");}
	else if(((c+a)>b)&&((c*c+a*a)>(b*b))) {printf("acute triangle");}
	else if(((c+a)>b)&&((c*c+a*a)<(b*b))) {printf("not acute triangle");}
	else if((c+a)<b) {printf("cannot form a triangle");}
	return 0; }