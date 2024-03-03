#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	float a,b,x,y,area;
	for(x=-1000000;x<=1000000;x++){
	    if(x<=(-1)){
	        y=1; }
	    else if (x>(-1) && x<1){
	        y=x*x; }
	    else {
	        y=x*x*x; } }
	scanf("%lf",&x);
	printf("%lf",&y);
	return 0; }