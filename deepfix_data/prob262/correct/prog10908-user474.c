#include<stdio.h>
#include<strings.h>
void rev(long a[],long n) {
    if(n>0) {
        printf("%ld ",a[n]);
        rev(a,n-1); }
    if(n==0) {
        printf("%ld ",a[n]); } }
int main() {
    long n;int i;
    scanf("%ld",&n);
    long a[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    rev(a,n);
    return 0; }