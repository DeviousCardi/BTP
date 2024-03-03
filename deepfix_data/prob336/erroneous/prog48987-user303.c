#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b<=c)||(b+c<=a)||(a+c<=b)) {
	    printf("cannot form Triangle"); }
	else {
	    if((c*c<=a*a+b*b)||(a*a<=b*b+c*c)||(b*b<=a*a+c*c)) {
	        printf("Acute Triangle"); }
	    else {
	        printf("Not Acute Triangle"); }
	return 0; }