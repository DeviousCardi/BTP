#include <stdio.h>
#include <stdlib.h>
int main() {
	double ti;
	scanf ("%lf",&ti);
	if(ti==200000){
	printf ("%0.2f",0.00);}
	else if(ti>=200001 && ti<=500001){
	printf ("%0.2lf",0.1*(ti-200000));}
	else if(ti<=1000000){
	    printf("%0.2lf",(30000)+(0.2*(ti-500000)));}
	    else if(ti>1000000){
	        printf ("%0.2lf",(130000)+(0.3*(ti-1000000)));}
	return 0; }