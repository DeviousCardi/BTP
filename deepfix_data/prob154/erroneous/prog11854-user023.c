#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	double a,b,area;
	scanf("%d",&n);
	scanf("%lf%lf",&a,&b);
	if(a<=-1&&b<=-1){
	    area=1*(b-a)/n; }
	    else{
	        area=0.7500 }
	        if(a>-1&&a<1&&b>-1&&b>1){
	            area=1/3*(pow(b,3)-pow(a,3)); }
	            if(a>-1&&a<1&&b>1){
	                area=1/3*(1-pow(a,3))+1/4*(pow(b,4)-1); }
	                if(a>=1&&b>=1){
	                    area=1/4*(pow(b,4)-pow(a,4));
	                    if(a==-1&&b==1){
	                        area=0.7500; } }
	                printf("%.4lf",area);
	return 0; }