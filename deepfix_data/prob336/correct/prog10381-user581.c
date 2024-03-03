#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b)<=c ||(b+c)<=a||(c+a)<=b) {
	    printf("Cannot form a Triangle"); }
	else if((a*a+b*b)<c*c && (b*b+c*c)<a*a && (a*a+c*c)<b*b) {
	    printf("Not Acute Triangle"); }
	else if((a*a+b*b)>c*c||(b*b+c*c)>a*a||(a*a+c*c)>b*b) {
	printf("Acute Triangle"); }
	return 0; }