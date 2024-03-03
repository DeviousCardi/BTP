#include <stdio.h>
#include <stdlib.h>
int power(float x, int n)
{ int i;
  power(x,n)=x
    for(i=1;i<n) {
        power(x,n)=power(x,n)*x; }
    return power(x,n); }
int main() {
	float a,b,dx,x,fx,s;
	int n,i;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%d",&n);
	dx=((a-b)/n);
	for(i=0;i<=n;i++) {
	    x=a+((dx)*i);
	    fx=(2*power(x,3))-(8*x);
	    if(fx<0) {
	        fx=(-fx); }
	    s=s+((fx)*(dx)); }
	printf("%0.4f",s);
	return 0; }