#include <stdio.h>
int main() {
    int n,m,i,j,k=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&m);
    for ( i=0,j=0 ; i<2*n-1 ; i++ ) {
        if ( m==',' ) {
                scanf("%d",&m);
                continue; }
        else
            a[j++]=m;
        scanf("%d",&m); }
    for ( i=0 ; i<n ; i++ )
        printf("%d ",a[i]);
    return 0; }