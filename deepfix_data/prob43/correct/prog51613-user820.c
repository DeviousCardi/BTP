#include <stdio.h>
#include <stdlib.h>
double A(double i) {
    return(3i-(i*i*i)); }
double B(double i) {
    return(2*i*i*i-(i*i)-5i); }
int main() {
    int n,i;
    double b,a;
    scanf("%d%lf%lf",&n,&b,&a);
    double s=0;
    double pro;
    for(i=0;i<=n-1;i++) {
        pro=(double)((abs(A-B))*((double)(b-a)/n)); }
    s=s+pro;
    printf("%lf",&s);
	return 0; }