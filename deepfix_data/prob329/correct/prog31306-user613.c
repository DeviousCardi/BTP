#include <stdio.h>
#include <stdlib.h>
int main() {
	 int a,b,c;
	 scanf("%d%d%d",&a,&b,&c);
	 if ((a<b+c)&&(b<c+a)&&(c<a+b)) {
	     if ((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)) {
	        printf("Right Tringle"); }
	     else {
	         printf("Not Right Tringle"); } }
	 else {
	     printf("Cannot form a Triangle"); }
	return 0; }