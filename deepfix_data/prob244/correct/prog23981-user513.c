#include <stdio.h>
#include <stdlib.h>
int main() {
	float tax;
	int a;
	scanf("%d",&a);
	if (a<=200000) {
	    tax=0;
	    printf("%0.2f",tax); }
	else if (a>=200001&&a<=500000) {
	    tax=0.1*(a-200000);
	    printf("%0.2f",tax); }
	else if (a>=500001&&a<=1000000) {
	    tax=30000+.2*(a-500000);
	    printf("%0.2f",tax); }
	else if (a>1000000) {
	    tax=130000+.3*(a-1000000);
	    printf("%0.2f",tax); }
	return 0; }