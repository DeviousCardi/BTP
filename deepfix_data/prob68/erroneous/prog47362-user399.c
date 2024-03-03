#include<stdio.h>
int times(int a[],int n) {
    if(n==1)
        return a[0];
    printf("%d",n)
    return times(a,n-1)*a[n-1]; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=times(a,n);
    printf("%d",i);
    return 0; }