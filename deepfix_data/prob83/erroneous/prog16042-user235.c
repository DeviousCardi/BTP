#include <stdio.h>
void fun(int a[],int i,int d,int t) {
        a[d+i]=t ;
        printf ("%d",a[d+i]) ; }
int main() {
    int n,b,c,d,i,t ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    scanf ("%d",&d) ;
    for (i=n-d;i<=n;i++) {
        printf ("%d",&a[i]) }
    return 0; }