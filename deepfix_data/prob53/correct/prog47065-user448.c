#include<stdio.h>
long output=0;
int diff(long a[],int n){
    if (n==0) return output;
    output=output-a[n-1];
    return diff(a,n-1); }
int main() {
    int i,n;
    scanf ("%ld",&n);
    long a[n];
    for (i=0;i<n;i++){
        scanf ("%ld",&a[i]); }
    output=diff(a,n);
    printf("%ld",output+2*a[0]);
    return 0; }