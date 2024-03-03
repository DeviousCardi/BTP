#include<stdio.h>
long int sum(long int a[],int l,int n,long int s) {
    if(l==n) {
        return a[l]; }
    return sum(a,l+1,n,s+a[l]); }
int main() {
    int n,l=1,i;
    scanf("%d\n",&n);
    long int a[10000];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]);
        printf("%ld",a[i]); }
    printf("%ld",a[0]-sum(a,l,n,0));
    return 0; }