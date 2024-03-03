#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
    	scanf("%f%f%f",&a,&b,&c);
    if((a+b>c)||(b+c>a)||(c+a>b)) {
        if((a*a+b*b)==(c*c)||(c*c+b*b)==(a*a)||(a*a+c*c)==(b*b)) {
    	    printf("Right Triangle"); } }
    else if((a+b<=c)||(b+c<=a)||(c+a<=b)) {
	        printf("Cannot form a Triangle"); }
	    else if((a*a+b*b)!=(c*c)||(c*c+b*b)!=(a*a)||(a*a+c*c)!=(b*b))
	        printf("Not Right Triangle");
	return 0; }