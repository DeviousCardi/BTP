#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j;
    double a, b, x, x1[10000], sum_2 = 0, sum_3 = 0, sum_1 = 0;
    double sum2[10000], sum3[10000], sum1[10000];
    scanf("%lf %lf %d", &a, &b, &n);
    x = (double)(b-a)/n;
    x1[0] = a;
    x1[n] = b;
    for(i=1; i<n; i++) {
        x1[i] = x1[i] + x; }
    for(j=0; j<=i; j++) {
        if(x1 <= -1) {
             sum1[j] = sum1[j-1] + (x1[j] - x1[j-1]); }
        if(-1 < x1[j] && x1[j] < 1) {
            sum2[j] = sum2[j-1] + (x1[j]*x1[j])*(x1[j] - x1[j-1]); }
        else
        if(x1[j]>=1) {
            sum3[j] = sum3[j-1] + (x1[j]*x1[j]*x1[j])*(x1[j] - x1[j-1]); }
        sum_1 = sum1[j];
        sum_2 = sum2[j];
        sum_3 = sum3[j]; }
    printf("%.4lf", sum_2+sum_3);
	return 0; }