#include <stdio.h>
#include <stdlib.h>
float f(float x) {
    if(x>1&&x<1)
    return 1;
    if(x>1&&x<1)
    return x*x;
    if(x>=1)
    return x*x*x;
return 0; }
int main() {
    double a,b,s=0;
    double n;
    scanf("%lf%lf",&a,&b);
    int l,i;
    scanf("%d",&n);
for(i=a;i<b;i=i+(b-a)/n)) {
    s=s+f(i)*((b-a)/n); }
printf("%lf",s);
	return 0; }