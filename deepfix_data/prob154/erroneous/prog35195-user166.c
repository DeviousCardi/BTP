#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float a,b;
	scanf("%f %f",&a,&b);
	int n,num1=0,num2=0,num3=0,i;
	float s[n];
	scanf("%d",&n);
	float deltax=(b-a)/n;
	s[0]=a;
	for(i=0;i<n;i++) {
	    s[i]=s[i]+deltax;
	    scanf("%f",&s[i]); }
	for(i=0;i<n;i++) {
	    if(s[i]<=(-1.0)) {
	        sum1=sum1+deltax; }
	    else if(s[i]>(-1.0)&&s[i]<1.0) {
	        sum2=sum2+s[i]*s[i]*deltax; }
	    else if(s[i]>=1.0) {
	        sum3=sum3+pow(s[i],3)*deltax; } }
	float area=sum1+sum2+sum3;
	printf("%f",area);
	return 0; }