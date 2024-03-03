#include<stdio.h>
int count=0;
int sum(int a[],long int n,long int i) {
    count++;
    if(i==n-1) {
        scanf("%d",&a[n-1]);
        return a[i]; }
    else {
        scanf("%d",&a[i]);
        return a[i]-sum(a,n,i+1); } }
int main() {
    int a[10000];
    long int n;
    scanf("%ld",&n);
    printf("%d",sum(a,n,0));
    return 0; }