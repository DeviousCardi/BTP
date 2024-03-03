#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;int i;
    double a,b,area;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    area = 0.0;i = 0;
    while(i<n)
    {   if(a + i*((b-a)/n)<=-1) {
            area = area + ((b-a)/n);
            i++; }
        else if(a + i*((b-a)/n)>-1&&a + i*((b-a)/n)<1) {
            area = area + (a + i*((b-a)/n))*(a + i*((b-a)/n))*((b-a)/n);
            i++; }
        else {
            area = area + (a + i*((b-a)/n))*(a + i*((b-a)/n))*(a + i*((b-a)/n))*((b-a)/n);
            i++; } }
    printf("%lf",area);
	return 0; }