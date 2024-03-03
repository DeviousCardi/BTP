#include <stdio.h>
#include <math.h>
int main() {
	int a;int b;int c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c&&(b+c)>a&&(c+a)>b){
	    if((a*a+b*b)>(c*c)) {printf("acute triangle");}
	    else if((b*b+c*c)>(a*a)) {printf("acute triangle");}
	    else if((c*c+a*a)>(b*b)) {printf("acute triangle");}
	    else {printf("not acute triangle");} }
	else{
	    printf("cannot form a triangle"); }
	return 0; }