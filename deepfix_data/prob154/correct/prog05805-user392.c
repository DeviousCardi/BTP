#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
	double y,z,a1=0,a2=0,a3=0,ar=0,j,x;
	scanf("%d",&n);
	scanf("%lf%lf",&y,&z);
	x=((z-y)/n);
	for(j=y;j<z;j++){
	    if(j<=(-1)){
	        a1=a1+x; }
	    else if(j>(-1)&&j<1){
	        a2=a2+(j+j*x); }
	    if(j>=1){
	        a3=a3+(j+j*j*x); }
	    ar=a1+a2+a3; }
	printf("%.4lf",ar);
	return 0; }