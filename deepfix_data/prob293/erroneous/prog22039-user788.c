#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;	int b;	int c;	int d;	int e; int f;
	scanf("%d%d%d",&a,&b,&c);
	d= fmax(a,b);
	e= fmax(d,c);
	f=fmax(d,e);
	if(f<a+b||f<b+c||f<c+a){
	    if(a*a+b*b<f*f||a*a+c*c<f*f||b*b+c*c<f*f){
	        printf("Obtuse Triangle"); }
	    else {printf("Not Obtuse Triangle"); }
	else{printf("Cannot form a Triangle");}
	return 0; }