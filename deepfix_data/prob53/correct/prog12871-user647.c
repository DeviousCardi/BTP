#include<stdio.h>
int diff(long t[],long a ){
    if(a==1) return (t[0]);
    else {
        t[1]=t[0]-t[1];
        return diff(t+1,a-1); } }
int main() {
    long n,i,differ;
    scanf("%ld\n",&n);
    long a[n];
    for(i=0;i<n;i++){
        scanf("%ld ",&a[i]); }
    differ=diff(a,n);
    printf("%ld",differ);
    return 0; }