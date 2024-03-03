#include<stdio.h>
int main() {
    int i,j,n,a[400],min=400;
    scanf("%d",&n);
    for ( i=0 ; i<2*n ; i++)
        scanf("%d ",&a[i]);
    for ( i=0 ; i<2*n ; i++) {
        for (j=0 ; j<2*n ; j++) {
            if ( a[i] == a[j]) {
                if ( abs( a[i] - a[j] ) <= min)
                min = abs( a[i] - a[j] ); } } }
return 0; }