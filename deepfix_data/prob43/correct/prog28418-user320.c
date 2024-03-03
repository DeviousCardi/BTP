#include <stdio.h>
#include <stdlib.h>
float mod(float x) {
    if (x<0)
    return -x;
    else
    return x; }
int main() {
	float a,b,x,ar,c;
    int n;
    scanf("%f%f",&a,&b);
    scanf("%d",&n);
    c=(b-a)/n;
    for(x=a;x<=b;x=x+c)
    ar=0; {
        ar=ar+mod((8*x-2*x*x*x))*c; }
    printf("%0.4f",ar);
	return 0; }