#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if
	(a-b>=0) {
	    if (b-c>=0) {
	        printf("%d",b); }
	else {
	        if (c-a>=0) {
	            printf("%d",a); } } }
	else
	{ if(a-c>=0)
	printf("%d",a);
	else
	{ if(b-c>=0)
	printf("%d",c);
	else
	printf("%d",b); } }
	return 0; }