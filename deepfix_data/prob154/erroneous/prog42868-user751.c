#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,width,a1=0,a2=0,a3=0;
	double i
	int n;
	scanf("%d\n",&n);
	scanf("%ld",&a);
	scanf("%ld",&b);
	width=(b-a)/n;
	for(i=a;i<b;i=i+width) {
	    if(i<=-1) {
	        a1=a1+width; }
	    else
	    if(i>-1&&i<1) {
	        a2=a2+width*i*i; }
	    else
	    if(i>=1) {
	        a3=a3+width*i*i*i; } }
	     printf("%.4ld",a1+a2+a3);
	return 0; }