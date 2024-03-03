#include <stdio.h>
int main(){
    int n,j,i,arr[50],a[50];
    scanf("%d",&n);
    for ( i=1 ; i<=n ; i++ )
    scanf("%d ",&arr[i-1]);
    a[0] = 1;
    a[1] = arr[0];
    for ( j=0,k=0 ; j<n ; j++,k++ ) {
        for ( i=0 ; arr[k] == arr[i] ; i++ );
        a[j] = arr[i]; }
    for ( j=0 ; j<n ; j++)
    printf("%d",a[j]);
    return 0; }