#include<stdio.h>
int diff(long t[],long a ){
    if(a==1) return (t[0]);
    else {
        t[1]=t[0]-t[1];
        return diff(t+1,a-1); } }
int main() {
    long n,i,differ;
    scanf("%d\n",&n);
    long a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    differ=diff(a,n);
    printf("%d",differ);
    return 0; }