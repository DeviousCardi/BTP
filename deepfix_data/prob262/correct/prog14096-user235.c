#include<stdio.h>
#include<strings.h>
void rec(int a[], int n) {
    if (n==-1)
    return ;
    printf ("%d",a[n-1]) ;
    rec (a,n-1) ; }
int main() {
    int n,i,j ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    rec (a,n) ;
    return 0; }