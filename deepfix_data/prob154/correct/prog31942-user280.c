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
    float i;
    float n;
    scanf("%f",&n);
    float m;
    m=b-a/n;
for(i=a;i<b;i=i+m) {
    s=s+f(i)*m; }
printf("%0.4lf",s);
	return 0; }