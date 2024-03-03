#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	float a,b,x,pro=0,area=0;
	scanf("%f %f %d",&a,&b,&n);
	for (i=0;i<n;i++) {
	    x=a + ((b-a)/n)*i;
	    if (x<=-1) {
	        pro = 1*(b-a)/n; }
	    else if (x>=-1.000001 && x<=1) {
	        pro = x*x*(b-a)/n; }
	    else if (x>=1.000001) {
	        pro = x*x*x*(b-a)/n; }
	    area = area + pro; }
	printf ("%d", area);
	return 0; }