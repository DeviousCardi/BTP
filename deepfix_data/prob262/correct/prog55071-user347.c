#include<stdio.h>
#include<strings.h>
void job(long int a[],long int n) {
    if(n==0)
    return;
    printf("%ld",a[n-1]);
    job(a,n-1); }
int main() {
    long int n;
    scanf("%ld",&n);
    long int a[n];
    for(int i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    job(a,n);
    return 0; }