#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	if (a <=200000) {
	    printf("0.00"); }
	else if (200001 <= a && a <= 500000) {
	    printf("%.2f", 0.1*(a-200000)); }
	else if (500001 <= a && a <= 1000000) {
	    printf("%.2f", 30000 + 0.2*(a-500000)); }
	else if (a >= 1000001) {
	    printf("%.2f", 130000 + 0.3*(a-1000000)); }
	return 0; }