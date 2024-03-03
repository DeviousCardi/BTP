#include <stdio.h>
#include <stdlib.h>
int main() {
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	        if (a+b>c){
	            if (a*a+b*b<c*c) {
	                printf("obtuse triangle"); }
	            else {
	                printf("not obtuse triangle");
	            }}
	            else {
	                printf("cannot form a triangle"); }
	           	return 0; }