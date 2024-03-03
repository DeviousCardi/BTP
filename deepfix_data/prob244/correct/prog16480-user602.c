#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	scanf("%f",&a);
	if(a<=200000) {
	        printf("%.2f",0.0); }
	else if(a>=200001,&a<=500000) {
	    printf("%.2f",.1*(a-200000)); }
	else if(a>=500000,&a<=1000000) {
	    printf("%.2f",(30000)+(.2*(a-500000))); }
	else {
	    printf("%.2f",130000+(.3*(a-1000000))); }
	return 0; }