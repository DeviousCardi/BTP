#include <stdio.h>
#include <stdlib.h>
int main() {
 int n,x;
 double a,b,f(x);
 scanf("%d",&n);
 scanf("%lf%lf",&a,&b);
 x>=a&&x<=b;
 if(x<=(-1)) {
 return 1; }
 else {
 if(x<1&&x>-1) {
     return x*x; }
     if(x>=1) {
         return x*x*x; } }
	return 0; }