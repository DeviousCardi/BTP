#include <stdio.h>
int main(){
    int n,a,b,k;
    scanf("%d",&n);
    int i,j,min[1][2],num[2*n],arr[n];
    min[0][1]=n;
    for ( i=0 ; i<2*n ; i++ )
        scanf("%d",&num[i]);
    for ( k=1; k<=n ; k++ ) {
        for ( i=0 ; i<2*n ; i++ ) {
            if ( num[i]==k ) {
                a=i; } }
        for ( j=i+1 ; j<2*n ; j++ ) {
            if ( num[j]==k ) {
                b=j; } }
        arr[k-1]=b-a; }
    for( i=0 ; i<n ; i++ ) {
        if ( arr[i]<min[0][1] )
            min[0][1]=arr[i];
            min[0][0]=i+1; }
    printf("%d",min[0][0]);
    return 0; }