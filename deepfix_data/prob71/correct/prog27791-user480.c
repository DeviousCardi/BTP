#include <stdio.h>
int main() {
    int n,i,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2==0){
        m=a[n/2]+a[n/2-1]; }
    else {
        m=a[n/2-1]; }
    printf("%d",m);
    return 0; }