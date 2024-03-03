#include<stdio.h>
#include<strings.h>
void rec(int n) {
    printf ("%d",&n) ; }
int main() {
    int n,i,j ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    rec (int n) ;
    return 0; }