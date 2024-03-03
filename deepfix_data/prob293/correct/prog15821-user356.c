#include <stdio.h>
#include <stdlib.h>
    int main() {
    int a; int b; int c;
	scanf("%d%d%d",&a,&b,&c);
	if((a*a+b*b)>c*c &&(b*b+c*c)>a*a&&(c*c+a*a)>b*b) {
	    printf("Obtuse Triangle"); }
	else if(a*a+b*b<=c*c&&b*b+c*c<=a*a&&c*c+a*a<=b*b) {
	    printf("Not Obtuse Triangle "); }
	else{
	    printf("Cannot from a Triangle"); }
	return 0; }