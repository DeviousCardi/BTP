#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,n,i;
	double x,y,area;
	for(x=-1000000;x<=1000000;x++){
	    if(x<=(-1)){
	        y=1; }
	    else if (x>(-1) && x<1){
	        y=x*x; }
	    else {
	        y=x*x*x; } }
	scanf("%d%d%d",&a,&b,&n);
	if(b==a){
	    printf("0"); }
	if (b>a){
	    i=(b-a)/n;
	    area=0;
	    for (x=b;x<=a;x=x+i){
	        area=area + y*i; } }
	printf("%.4ld",area);
	return 0; }