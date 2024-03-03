#include<stdio.h>
int diff(long a[],long n,int start){
    long output;
    if (start==0){
        output=a[0];
        printf ("%ld",output); }
    if (start==n){
        return output; }
    output=output-a[start+1];
    return diff(a,n,start+1); }
int main() {
    long output,n,i;
    scanf ("%ld",&n);
    long a[n];
    for (i=0;i<n;i++){
        scanf ("%ld",&a[i]); }
    output=diff(a,n,0);
    printf("%ld",output);
    return 0; }