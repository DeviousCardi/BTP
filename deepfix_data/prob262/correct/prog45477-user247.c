#include<stdio.h>
#include<strings.h>
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    for (i=n-1;i>-1;i--) {
        printf("%ld",a[i]); }
    return 0; }