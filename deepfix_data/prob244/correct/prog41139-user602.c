#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	scanf("%f",&a);
	if(a<=200000) {
	        printf("%f",0); }
	else if(200001<=a<=500000) {
	    printf("%f",.1*(a-200000)); }
	else if(500001<=a<=1000000) {
	    printf("%f",(30000)+(.2*(a-500000))); }
	else {
	    printf("%f",130000+(.3*(a-1000000))); }
	return 0; }