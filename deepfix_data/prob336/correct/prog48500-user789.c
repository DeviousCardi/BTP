#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if((b*b-a*a-c*c>0||a*a-b*b*-c*c>0||c*c*-a*a-b*b>0)&&(a+b>c||b+c>a||a+c>b)) {
	    printf("Acute Triangle"); }
	else if((b*b-a*a-c*c<=0||a*a-c*c-b*b<=0||c*c-a*a-b*b<=0)&&(a+c>b||a+b>c||b+c>a)) {
	    printf("Not Acute Triangle"); }
	else if(a+b<c||a+c<b||b+c<a) {
	    printf("Cannot form a Triangle"); }
	return 0; }