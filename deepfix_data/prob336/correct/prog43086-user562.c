#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
	    printf("Cannot form a Triangle");
	else {
	        if(a>=b&&a>=c) {
	            if((a*a)<(b*b+c*c))
	            printf("Acute Triangle");
	            else
	            printf("Not Acute Triangle"); }
            else if(b>=a&&b>=c) {
                if((b*b)<a*a+c*c)
                printf("Acute Triangle");
                else
                printf("Not Acute Triangle"); }
            else if(c>=a&&c>=b) {
                if((c*c)<a*a+b*b)
                printf("Acute Triangle");
                else
                printf("Not Acute Triangle"); } }
	return 0; }