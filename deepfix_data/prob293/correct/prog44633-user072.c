#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	if((a*a)+(b*b)<(c*c)){
	    printf("obtuse triangle"); }
	else if(a*a+b*b>=c*c){
	    printf("not obtuse triangle"); }
	else{
	    printf("cannot form a triangle"); }
	return 0; }