#include<stdio.h>
int sum(int,int)
int main() {
    long int n;
    scanf("%ld",&n);
    double arr[n],sum=0;
    for(int i=0;i<n;i++) {
        scanf("%lf",&arr[i]); }
    int s=sum(n,arr);
    printf("%.0lf",sum);
    return 0; }
int sum(n,arr); {
    sum(0)=0;
    sum(n)=sum(n-1,arr)+arr[n-1]; }