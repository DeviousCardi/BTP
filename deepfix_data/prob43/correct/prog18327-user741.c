#include <stdio.h>
#include <stdlib.h>
float fx(float);
float gx(float);
int main() {
	float a, b,k, x, y, arr[10000];
	int n,i;
	scanf("%f %f",&a,&b);
	k=(b-a)/n;
	float sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++) {
	    arr[i]= a+ (i*k); }
	for(i=0;i<n;i++) {
	    x=fx(arr[i]);
	    y=fx(arr[i]);
	    if(x>=y) {
	        sum= sum + (x-y)*k; }
	    else
	    sum =sum + (y-x)*k; }
	printf("%f",sum);
	return 0; }
float fx(float u) {
    float fn;
    fn= -(u*u) + (3*u);
    return fn; }
float gx(float v) {
    float gn;
    gn= (2*v*v*v) - (v*v) -(5*v);
    return gn; }