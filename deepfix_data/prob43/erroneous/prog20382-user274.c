#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    double a,b;int n,i;double area=0.00;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	for(i=a;i<b;i=i+((b-a)/n)) {
	area=area+(abs(2*pow(i,3)-8*i)*(b-a)/n)}
	printf("%.4lf",area);
	return 0; }