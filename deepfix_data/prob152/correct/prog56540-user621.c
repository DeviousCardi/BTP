#include <stdio.h>
long int d,n;
int fn(long int ar[],long int x,long int i) {
    if(x==0) {
        printf("YES");
        return 0; }
    if(x<0) {
        return 0; }
    long int k=x-ar[i+1];
    i=i+1;
    return (fn(ar,k,i));
    return (fn(ar,x,i)); }
int main() {
    scanf("%d",&n);
    long int ar[n];
    for(long int i=0;i<n;i++) {
        scanf("%ld",&ar[i]); }
    long int sum=0;
    for(long int i=0;i<n;i++) {
        sum=sum+ar[i]; }
    d=sum/2;
    if(sum%2!=0) {
        printf("NO"); }
    else {
        fn(ar,d,-1); }
    return 0; }