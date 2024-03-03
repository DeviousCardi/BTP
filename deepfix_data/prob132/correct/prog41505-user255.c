#include <stdio.h>
int main() {
    int n,i,j,k=0;
    scanf("%d",&n);
    char m,a[n];
    scanf("%c",&m);
    for ( i=0,j=0 ; i<2*n-1 ; i++ ) {
        if ( m==',' ) {
                scanf("%c",&m);
                continue; }
        else
            a[j++]=m-'0';
        scanf("%c",&m); }
    for ( i=0 ; i<n ; i++ )
        printf("%d ",a[i]);
    return 0; }