#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti ;
	scanf("%d", &ti);
	float tax ;
	if (ti <= 200000) {
	    tax = 0 ;
	} else if ((ti>=200001)&&(ti<=500000)) {
	    tax = 0.1*(ti-200000) ;
	} else if ((ti>=500001)&&(ti<=1000000)) {
	    tax = 30000 + 0.2*(ti-500000) ;
	} else if (ti>=1000001) {
	    tax = 130000 + 0.3*(ti-1000000) ; }
	printf("%.2f", tax);
	return 0; }