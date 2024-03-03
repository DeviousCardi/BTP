#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int x) {
    int y = -pow(x,2) + 3*x;
    return y; }
int g(int x) {
    int y = 2*pow(x,3) - pow(x,2) - 5*x;
    return y; }
int mod(int x) {
    int y;
    if (x<0)
    y = -x;
    else
    y=x;
    return y; }
int main() {
    double a,b;
    int n,i;
    scanf("%f",a);
    double h = (b-a)/n;
    double area = 0;
    for (i=0;i<n;i++) {
        x = a+ h*i;
        area = area + h*mod(f(x) - g(x)); }
    printf("".2%lf"", area);
	return 0; }