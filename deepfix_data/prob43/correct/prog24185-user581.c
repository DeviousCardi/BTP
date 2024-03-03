#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float x,a,b;
    int i,n;
    float sum=0;
   scanf("%f",&a);
    scanf("%f",&b);
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        x=a+(i*(b-a))/n;
        sum=sum+(((-2*x*x*x)+(8*x))*(b-a)/n); } {
        printf("%0.4f",sum); }
	return 0; }