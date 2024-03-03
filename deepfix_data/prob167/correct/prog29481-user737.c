#include<stdio.h>
double sum(long int,double[]);
int main() {
    long int n;
    scanf("%ld",&n);
    double arr[n];
    for(int i=0;i<n;i++) {
        scanf("%lf",&arr[i]); }
    double s=sum(n,arr);
    printf("%.0lf",s);
    return 0; }
double sum(long int n,double arr[]) {
    if(n==0)
    return 0;
    else return sum(n-1,arr); }