#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a>0,b>0,c>0;
	scanf("%d%d%d",&a,&b,&c);
	if(a==sqrt(b*b+c*c)||b==sqrt(a*a+c*c)||c==sqrt(b*b+a*a)) {
	    printf("Right Triangle"); }
	else if(a+b>c||a+c>b||b+c>a) {
	    printf("Not Right Triangle"); }
	else{
	    printf("Cannot form a Triangle"); }
	return 0; }