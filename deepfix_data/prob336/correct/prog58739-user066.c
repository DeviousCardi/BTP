#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",a,b,c);
	if((a*a+b*b>c*c)&&(a-b<c)) {
	    printf("Acute Triangle"); }
	else if(((a*a+b*b<=c*c)&&(a-b<c))) {
	    printf("Not Acute Triangle"); }
	else if(a-b>c) {
	    printf("Cannot form a Triangle"); }
	return 0; }