#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int a,b,c;
	d=pow(a,2);
	e=pow(b,2);
	f=pow(c,2);
	scanf("%d %d %d",a,b,c);
	if(a+b<c||a+c<b||b+c<a) {
	     printf("Cannot form a Triangle"); }
	else {
	   if(d+e<f||e+f<d||d+f<e) {
	        printf("Obtuse Triangle"); }
	   else {
	       printf("Not Obtuse Triangle") } }
	return 0; }