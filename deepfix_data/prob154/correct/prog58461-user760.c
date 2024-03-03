#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    float i,a,b,x,area,iarea;
	scanf("%f%f%d",&a,&b,&n);
	x=(b-a)/n;
	for(i=a;i<b;i=i+x){
	    if(i<=-1){
	        iarea=1*x; }
	    if((i>-1)&&(i<1)) {
	        iarea=i*i*x; }
	    if(i>=1){
	        iarea=i*i*i*x; }
	    area=area+iarea; }
	printf("%f",area);
	return 0; }