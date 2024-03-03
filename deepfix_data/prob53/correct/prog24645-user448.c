#include<stdio.h>
long output=0;
long diff(long a[],int n){
    if (n==0) return -output+2*a[0];
    output=output+a[n-1];
    return diff(a,n-1); }
int main() {
    int i,n;
    scanf ("%ld",&n);
    long a[n+1];
    for (i=0;i<n;i++){
        scanf ("%ld",&a[i]); }
    output=diff(a,n);
    printf("%ld",output);
    return 0; }