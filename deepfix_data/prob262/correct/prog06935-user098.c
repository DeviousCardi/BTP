#include<stdio.h>
#include<strings.h>
void reverse(long a[1000000000], long start, long end) {
    if(start==end) {
        return; }
    else {
        long t=a[end];
        a[end]=a[start];
        a[start]=t;
        reverse(a,start+1,end-1); } }
int main() {
    long a[1000000000];
    long n;
    scanf("%d",&n);
    for(long i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    reverse(a,0,n-1);
    for(long i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }