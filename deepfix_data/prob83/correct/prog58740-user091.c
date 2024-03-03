#include <stdio.h>
void store(int a[],int x)
{   int n=0,i=0;
     int r=a[n-1];
    for(i=1;i<n;i++) {
        a[i]=a[i-1]; }
    a[0]=r;
    return ; }
int main() {
    int n,k=0,i=0,j;
    scanf("%d",&n);
    int a[n];
    int m=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&m);
    for(j=0;j<m;j++) {
       store(a,n) ; }
    for(k=0;k<n;k++) {
        printf("%d",a[k]); }
    return 0; }