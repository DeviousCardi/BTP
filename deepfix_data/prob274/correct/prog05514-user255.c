#include <stdio.h>
int main(){
    int n,j,i,k,arr[50],a[50];
    scanf("%d",&n);
    for ( i=1 ; i<=n ; i++ )
    scanf("%d ",&arr[i-1]);
    a[0] = 1;
    a[1] = arr[0];
    a[2] = arr[arr[0]-1];
    a[3] = arr[arr[1]-1];
    a[4] = arr[arr[2]-1];
    for ( j=0 ; j<n ; j++)
    printf("%d",a[j]);
    return 0; }