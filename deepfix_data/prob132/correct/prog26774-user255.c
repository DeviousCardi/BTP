#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d\n",&n);
    char m,a[n];
    scanf("%c",&m);
    for ( i=0,j=0 ; i<2*n-1 ; i++ ) {
        if ( m==',' ) {
                scanf("%c",&m);
                continue; }
        else
            a[j++]=m-'0';
        scanf("%c",&m); }
    for ( i=0 ; i<n ; i++ ) {
        if ( a[i]=a[i+1])
            continue;
        k=0;
        for ( j=0 ; j<n ; j++ ) {
            if ( a[j]==a[i] )
                k++; }
        if ( k!=a[i] ) {
                printf("No");
                return 0; } }
    printf("Yes");
    return 0; }