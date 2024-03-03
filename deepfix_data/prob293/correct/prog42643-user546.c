#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a*a)+(b*b)<(c*c)) {
	    printf("Obtuse Triangle"); }
	else {
	    printf("Not Obtuse Triangle"); }
	if((a+b<c)||(a-b>c)) {
	    printf("cannot form a traingle"); }
	return 0; }