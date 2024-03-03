#include<stdio.h>
int a[100000];
int n,k;
int sum(n) {
    k=a[n-1];
    if(n==1) {
        return a[0]; }
    else
    return (k+sum(n-1)); }
int main() {
    int n;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    printf("%d",sum(n));
    return 0; }