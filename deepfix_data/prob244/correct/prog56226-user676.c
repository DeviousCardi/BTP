#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float a,b,c,d;
	scanf("%d",&ti);
	if (200000>=ti){
	    printf("%.2f",a=0); }
	else{
	    if ((200001<=ti)&&(500000>=ti)){
	       printf("%.2f",b=(10/100)*(ti-200000)); }
	    else {
	        if((500001<=ti)&&(ti<=1000000)){
	        printf("%.2f",c=30000+(20/100)*(ti-500000)); }
	        else
	        if (ti>1000000){
	        printf("%.2f",d=130000+(30/100)*(ti-1000000)); } } }
	return 0; }