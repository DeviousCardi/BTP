#include<stdio.h>
long int sum(long int a[],int l,int n,long int s) {
    if(l==n) {
        return a[l]; }
    return sum(a,l+1,n,s+a[l]); }
int main() {
    int n,i,s=0;
    scanf("%d\n",&n);
    long int a[10000];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    s=sum(a,0,n,s);
    printf("%ld",a[0]-s);
    return 0; }