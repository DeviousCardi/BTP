#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	    if (ti<= 200000) {
	        printf("0.00" ); }
	        else if (ti>=200001&&ti<=500000) {
	            printf("%.2f",(ti-200000)/10.0); }
	        else if (ti>=500001&&ti<=1000000) {
	            printf(".2f",30000+ (20*(ti-500000))/100) }
	return 0; }