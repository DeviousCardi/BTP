#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b)) {
	    printf("Cannot form a Triangle"); }
    else {
    if(((a*a)+(b*b)<(c*c))||((a*a)+(c*c)<(b*b))||((b*b)+(c*c)<(a*a))) {
	    printf("Obtuse Triangle"); }
	    else {
	        printf("Not Obtuse Traingle"); } }
	return 0; }