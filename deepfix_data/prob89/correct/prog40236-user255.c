#include <stdio.h>
int main(){
    int i,j,k,n,a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for ( i=0 ; i<n ; i++) {
        scanf("%d ",&a[i]); }
    for ( i=0 ; i<n ; i++) {
        for ( j=0 ; j<n ; j++) {
            if ( a[i] + a[j] == k) {
                    printf("lucky");
                    return 0; }
           else {
                        printf("unlucky");
                        return 0; } } }
 return 0; }