#include<stdio.h>
#include<strings.h>
void rec(int a[], int n) {
    printf ("%d",a[n]) ; }
int main() {
    int n,i,j ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    rec (a,n) ;
    return 0; }