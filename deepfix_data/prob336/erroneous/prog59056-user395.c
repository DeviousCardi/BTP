#include <stdio.h>
#include <stdlib.h>
int main() {
	  int a,b,c;
	  scanf("%d",&a);
	  scanf("%d",&b);
	  scanf("%d",&c);
	  if (a+b>c && b+c>a && a+c>b) {
	       if ((a*a+b*b*>c*c)||(a*a+c*c>b*b)||(b*b+c*c>a*a) {
	           printf("Acute triangle"); }
	       else {
	         printf("Not acute triangle"); }
	   else {
	         printf("Cannot form a triangle");
	return 0; }