#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	float x;
	scanf("%d",&a);
	if(a<=200000) {
	    printf("0.00"); }
	else if((a>=200001) && (a<=500000)) {
	    x=0.1*(a-200000);
	    printf("%0.2f",x); }
	else if((500001<=a) && (a<=1000000)) {
	    printf("%0.2f",(30000)+0.2*(a-500000)); }
	else if(a>=1000000) {
	    printf("%0.2f",130000+0.3*(a-1000000)); }
	return 0; }