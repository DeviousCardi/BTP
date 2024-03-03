#include<stdio.h>
#define max 100000
long int n;
double a[max];
double arrdiff(double a[],double diff) {
    static int i=1;
    if(i<n) {
        diff-=a[i];
        i++;
        return arrdiff(a,diff); }
    else {
        return diff; } }
int main() {
    double diff;
    scanf("%ld\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%lf ",&a[i]); }
    double k=a[0];
    diff=arrdiff(a,k);
    printf("%.0lf",diff);
    return 0; }