#include<stdio.h>
long int times(int a[],int n) {
    if(n==0)
        return 1;
    return times(a,n-1)*a[n-1]; }
int main() {
    int n,i;
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    printf("%ld",times(a,n));
    return 0; }