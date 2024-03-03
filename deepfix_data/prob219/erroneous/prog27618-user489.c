#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%a%b%c",&a,&b,&c);
	int min1,max1;
	if(a>b) {
	    max1=a
	    min1=b; }
	else {
	    max1=b
	    min1=a; }
	if(min1>c) {
	    printf("%d",min1); }
	else {
	    if(max1>c) {
	    printf("%d",c); }
	    else {
	        printf("%d",max1); } }
	return 0; }