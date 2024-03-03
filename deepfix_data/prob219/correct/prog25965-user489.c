#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min1,max1;
	if(a>b) {
	    max1=a;
	    min1=b; }
	else {
	    max1=b;
	    min1=a; }
	if(min1>c&&a!=b) {
	    printf("%d",min1); }
	else {
	    if(min1>c&&a==b) {
	        printf("%d",c); }
	    if(max1>c) {
	    printf("%d",c); }
	    else {
	        printf("%d",max1); } }
	return 0; }