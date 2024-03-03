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
    scanf("%lf%lf",&a,&b);
    int l,i;
    scanf("%d",&l);
for(i=a;i<b;i=i+(b-a)/l) {
    s=s+f(i)*((b-a)/l);
i++; }
printf("%lf",s);
	return 0; }