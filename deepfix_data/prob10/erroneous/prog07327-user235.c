#include<stdio.h>
int fun (int a[n] ,int n ,int i) {
    int count=1,k,j ;
    for (k=i;k>=0;) {
        for (j=k-1;j>=0;j--) {
            if (a[k]>a[j]) {
                count=count+1 ;
                break ; } }
        k=j ; }
    return count ; }
int main() {
    int b,c,d,i,j,k,n ;
    scanf ("%d",&n) ;
    int a[n] ;
    for (i=0;i<n;i++) {
        scanf ("%d",&a[i]) ; }
    int maxtill[n] ;
    int max=1 ;
    for (i=0;i<n;i++) {
        maxtill[i]=fun(a,n,i) ;
        if (maxtill[i]>max) {
            max=maxtill[i] ; } }
    printf ("%d",max) ;
    return 0; }