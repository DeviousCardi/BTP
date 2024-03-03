#include <stdio.h>
int sort(int a[],int i,int n) {
    int max=0,j;
    if (n==0)
    return 0;
    else for(j=0;j<n;j++) {
        if(a[j]<max)
        a[j]=max; }
    return sort(a+1,i+1,n-1); }
int main() {
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(k=0;k<n;k++) {
        scanf("%d",&a[k]); }
    sort(a[],k,n);
        if (n%2==0)
        return (a[n/2]+a[n/2+1])/2;
        else
        return a[n/2+1];
    return 0; }