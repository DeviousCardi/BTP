#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	float i;
	double a,b,x,y,area;
	scanf("%lf%lf%d",&a,&b,&n);
	if(b==a){
	    printf("0.0000"); }
	else {
	    i=(b-a)/n;
	    area=0;
	    for (x=a;x<=b;x=x+i){
	    if(x<=-1){
	        y=1.0; }
	    else if (x>(-1) && x<1){
	        y=x*x; }
	    else {
	        y=x*x*x; }
	        area=area + y*i; } }
	printf("%.4lf",area);
		return 0; }