#include <stdio.h>
int main() {
    const double E=0.000001;
    double a,b,interval,subarea=0;
    int n,key=0;
    scanf("%lf%lf%d", &a, &b, &n);
    interval=(b - a)/n;
    while(key<n && a + interval*key + 1<E) {
        subarea+=1;
        key++; }
    while(key<n && a + interval*key + 1>-E && a + interval*key - 1<E) {
        subarea+=(a + interval*key)*(a + interval*key);
        key++; }
    while(key<n) {
        subarea+=(a + interval*key)*(a + interval*key)*(a + interval*key);
        key++; }
    printf("%.4lf", subarea*interval);
	return 0; }