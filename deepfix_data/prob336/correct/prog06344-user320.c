#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)<=c) {
	    printf(" cannot form a triangle"); }
	else {
	    if((a*a+b*b)>c*c) {
	        printf("acute triangle"); }
	  else {
	      printf("not acute triangle"); } }
	return 0; }