#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    float i,a,b,x,area=0,iarea;
	scanf("%f%f%d",&a,&b,&n);
	x=(b-a)/n;
	for(i=a;i<b;i=i+x){
	    if(i<=-1){
	        iarea=x; }
	    else if((i>-1)&&(i<1)) {
	        iarea=i*i*x; }
	    else if(i>=1){
	        iarea=i*i*i*x; }
	    area=area+iarea; }
	printf("%.4f",area);
	return 0; }