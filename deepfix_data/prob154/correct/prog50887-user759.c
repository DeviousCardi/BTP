#include <stdio.h>
#include <stdlib.h>
int main() {
    const double E=0.000001;
    double a,b,diff,subarea=0;
    int n,key=0;
    scanf("%lf%lf%d", &a, &b, &n);
    diff=(b - a)/n;
    while(a + diff*key + 1<E) {
        subarea++;
        key++; }
    while(a + diff*key + 1>-E && a + diff*key - 1<E) {
        subarea+=(a + diff*key)*(a + diff*key);
        key++; }
    while(key<n) {
        subarea+=(a + diff*key)*(a + diff*key)*(a + diff*key);
        key++; }
    printf("%.4lf", subarea*diff);
	return 0; }