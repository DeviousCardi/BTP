#include<stdio.h>
long output=0;
int diff(long a[],long n){
    if (n==0) return output;
    output=output-a[n];
    return diff(a,n-1); }
int main() {
    long n,i;
    scanf ("%ld",&n);
    long a[n];
    for (i=0;i<n;i++){
        scanf ("%ld",&a[i]); }
    output=diff(a,n);
    printf("%ld",output+a[0]);
    return 0; }