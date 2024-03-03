#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	scanf("%f",&a);
	if (a<=200000) {
	    printf("%0.2f",a*0); }
	else if(a<=500000) {
	    printf("%0.2f",(a-200000)/10); }
	else if(a<=1000000) {
	    printf("%0.2f",30000+(a-500000)*2/10); }
	else {
    printf("%0.2f",130000+(a-1000000)*3/10); }
	return 0; }