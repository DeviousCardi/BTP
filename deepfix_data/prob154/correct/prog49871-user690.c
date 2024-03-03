#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double i,a,b,x,y,area;
	scanf("%lf",&x);
	    if(x<=-1){
	        y=1.0; }
	    else if (x>(-1) && x<1){
	        y=x*x; }
	    else {
	        y=x*x*x; }
	scanf("%lf%lf%d",&a,&b,&n);
	if(b==a){
	    printf("0"); }
	if (b>a){
	    i=(b-a)/n;
	    area=0;
	    for (x=b;x<=a;x=x+i){
	        area=area + y*i; } }
	printf("%.4lf",area);
		return 0; }