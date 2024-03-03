#include <stdio.h>
#include <stdlib.h>
double A(double i) {
    return(3i-(i*i*i)); }
double B(double i) {
    return(2*i*i*i-(i*i)-5i); }
int main() {
    int n,i;
    double b,a;
    scanf("%lf%lf%d",&a,&b,&n);
    double s=0.00;
    double pro,total;
    for(i=0;i<=n/16;i++) {
        pro=(abs(A-B));
       s=s+pro; }
    total = ((double)(s))*(double)((b-a)/n);
  printf("%.4lf",total);
	return 0; }