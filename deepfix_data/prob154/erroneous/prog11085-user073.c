#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,i;
	do {
	    scanf("%lf %lf",&a,&b);
	    scanf("%d",&n);
	}while(b<a);
	double Area=0;
	double Int = (b-a)/n;
	for(i=a;i<;i=i + Int) {
	    if(i<=(-1)) {
	        Area=Area + (1.0)*(Int); }
	    else if(i>(-1)&&i<1) {
	        Area = Area + (i*i)*(Int); }
	    else if(i>1) {
	        Area = Area + (i*i*i)*Int; } }
	printf("%.4lf",Area);
	return 0; }