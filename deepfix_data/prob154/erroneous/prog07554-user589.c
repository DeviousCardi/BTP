#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
int main() {
    int n;
    double a, b, x, x1[10000], sum1 = 0, sum2 = 0, sum3 = 0;
    scanf("%lf %lf %d", &a, &b, &n);
    x = (double)(b-a)/n;
    x1[0] = a;
    x1[n] = b;
    for(i=1; i<n; i++) {
        x1[i] = x1[i] + x; }
    for(j=0; j<=i+1; j++) {
        if(x1[j] <= -1)
        {sum1 = sum1 + (x1[j] - x[j-1]);}
        else if(1 < x1[j] && x1[j])
        {sum2 = sum2 + (x1[j]*x1[j])*(x1[j] - x1[j-1]);}
        else if(x1[j]>=1)
        {sum3 = sum3 + (x1[j]*x1[j]*x1[j])*(x1[j] - x1[j-1]);} }
    printf("%lf", sum1+sum2+sum3);
	return 0; }