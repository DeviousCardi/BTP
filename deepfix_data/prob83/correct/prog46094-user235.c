#include <stdio.h>
void fun(int a[],int i,int d,int t) {
        a[d+i]=t ;
        printf ("%d",a[d+i]) ; }
int main() {
    int n,b,c,d,i,t ;
    scanf ("%d",&n) ;
    const a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    scanf ("%d",&d) ;
    for (i=0;i<=n-d-1;i++) {
        t=a[i] ;
    fun (a,i,d,t) ; }
    return 0; }